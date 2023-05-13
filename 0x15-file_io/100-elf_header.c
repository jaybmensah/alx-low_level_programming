#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void chk_elf(unsigned char *ident);
void disp_magic(unsigned char *ident);
void disp_version(unsigned char *ident);
void disp_class(unsigned char *ident);
void disp_data(unsigned char *ident);
void disp_abi_ver(unsigned char *ident);
void disp_type(unsigned int type, unsigned char *ident);
void disp_ent_pt_add(unsigned long int entry, unsigned char *ident);
void disp_os_abi(unsigned char *ident);
void close_fyl(int file);

/**
 * chk_elf - Checks if a file is an ELF file.
 * @ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void chk_elf(unsigned char *ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (ident[index] != 127 &&
			ident[index] != 'E' &&
			ident[index] != 'L' &&
			ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * disp_magic - Displays the magic numbers of an ELF header.
 * @ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void disp_magic(unsigned char *ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * disp_version - Displays the version of an ELF header.
 * @ident: A pointer to an array containing the ELF version.
 */
void disp_version(unsigned char *ident)
{
	printf("  Version:                           %d",
		   ident[EI_VERSION]);

	switch (ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * disp_class - Displays the class of an ELF header.
 * @ident: A pointer to an array containing the ELF class.
 */
void disp_class(unsigned char *ident)
{
	printf("  Class:                             ");

	switch (ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("None Available\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * disp_data - Displays the data of an ELF header.
 * @ident: A pointer to an array containing the ELF class.
 */
void disp_data(unsigned char *ident)
{
	printf("  Data:                              ");

	switch (ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("None Available\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * disp_abi_ver - Displays the ABI version of an ELF header.
 * @ident: A pointer to an array containing the ELF ABI version.
 */
void disp_abi_ver(unsigned char *ident)
{
	printf("  ABI Version:                       %d\n",
		   ident[EI_ABIVERSION]);
}

/**
 * disp_type - Displays the type of an ELF header.
 * @type: The ELF type.
 * @ident: A pointer to an array containing the ELF class.
 */
void disp_type(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
	}
}

/**
 * disp_ent_pt_add - Displays the entry point of an ELF header.
 * @entry: The address of the ELF entry point.
 * @ident: A pointer to an array containing the ELF class.
 */
void disp_ent_pt_add(unsigned long int entry, unsigned char *ident)
{
	printf("  Entry point address:               ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
				((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

/**
 * disp_os_abi - Displays the OS/ABI of an ELF header.
 * @ident: A pointer to an array containing the ELF version.
 */
void disp_os_abi(unsigned char *ident)
{
	printf("  OS/ABI:                            ");

	switch (ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * close_fyl - Closes a file.
 * @file: The file descriptor of the file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_fyl(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close file descriptor %d\n", file);
		exit(98);
	}
}

/**
 * main - Entry point.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Upon success - EXIT_SUCCESS. Otherwise - EXIT_FAILURE.
 */
int main(int argc, char *argv[])
{
	int file_descriptor;
	Elf64_Ehdr elf_header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <ELF-file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	bytes_read = read(file_descriptor, &elf_header, sizeof(elf_header));
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_descriptor);
		exit(EXIT_FAILURE);
	}

	chk_elf(elf_header.e_ident);
	printf("ELF Header:\n");
	disp_magic(elf_header.e_ident);
	disp_class(elf_header.e_ident);
	disp_data(elf_header.e_ident);
	disp_version(elf_header.e_ident);
	disp_abi_ver(elf_header.e_ident);
	disp_os_abi(elf_header.e_ident);
	disp_type(elf_header.e_type, elf_header.e_ident);
	disp_ent_pt_add(elf_header.e_entry, elf_header.e_ident);

	close(file_descriptor);
	exit(EXIT_SUCCESS);
}