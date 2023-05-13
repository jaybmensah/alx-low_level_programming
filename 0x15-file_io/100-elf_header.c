#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>

#define ELF_MAGIC "\x7F\x45\x4C\x46"

/**
 * print_error - Prints an error message and exits the program.
 * @message: The error message to be printed.
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * read_elf_header - Reads the ELF header from the given file descriptor.
 * @fd: The file descriptor of the ELF file.
 * @header: A pointer to the ELF header structure to be filled.
 */
void read_elf_header(int fd, Elf64_Ehdr *header)
{
	if (read(fd, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error("Failed to read ELF header");
}

/**
 * print_elf_header_info - Prints the information contained in the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\nClass: %s\n", (header->e_ident[EI_CLASS] ==
	ELFCLASS32) ? "ELF32" : "ELF64");
	printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB)
	? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: %lx\n", header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or the appropriate error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	const char *filename;
	char magic[EI_NIDENT];
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Failed to open file");

	if (read(fd, magic, EI_NIDENT) != EI_NIDENT)
		print_error("Failed to read ELF header");

	if (memcmp(magic, ELF_MAGIC, sizeof(ELF_MAGIC) - 1) != 0)
		print_error("Not an ELF file");

	if (lseek(fd, 0, SEEK_SET) == -1)
		print_error("Failed to seek to the beginning of the file");

	read_elf_header(fd, &header);
	close(fd);

	print_elf_header_info(&header);

	return (0);
}
