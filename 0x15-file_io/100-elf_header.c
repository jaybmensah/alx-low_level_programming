#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <elf.h>

#define MAX_FILE_SIZE 1024

/**
 * print_elf_header - Prints the ELF header
 * @elf_header: The ELF header
 * Return: None
*/
void print_elf_header(Elf64_Ehdr *elf_header)
{
	int i;

	printf("Magic: %x\n", elf_header->e_ident[EI_MAG0]);
	printf("Class: %x\n", elf_header->e_ident[EI_CLASS]);
	printf("Data: %x\n", elf_header->e_ident[EI_DATA]);
	printf("Version: %x\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: %x\n", elf_header->e_ident[EI_OSABI]);
	printf("ABI Version: %x\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type: %x\n", elf_header->e_type);
	printf("Entry point address: %lx\n", (unsigned long)elf_header->e_entry);

	for (i = 0; i < 13; i++)
	{
		printf("%c", elf_header->e_ident[i]);
	}
	printf("\n");
}

/**
 * validate_file - validates the file
 * @filename: file to be validated
 * Return: None
*/
void validate_file(char *filename)
{
	int fd;
	struct stat st;
	void *file_contents;
	Elf64_Ehdr *elf_header;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Failed to open file");
		exit(98);
	}

	if (fstat(fd, &st) == -1)
	{
		perror("Failed to get file size");
		exit(98);
	}

	if (st.st_size > MAX_FILE_SIZE)
	{
		fprintf(stderr, "File is too large\n");
		exit(98);
	}

	file_contents = mmap(NULL, st.st_size, PROT_READ, MAP_PRIVATE, fd, 0);

	if (file_contents == MAP_FAILED)
	{
		perror("Failed to map file contents");
		exit(98);
	}

	elf_header = (Elf64_Ehdr *)file_contents;

	print_elf_header(elf_header);

	munmap(file_contents, st.st_size);
	close(fd);
}

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, 1 on failure
*/
int main(int argc, char *argv[])
{
	char *filename;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s file\n", argv[0]);
		exit(98);
	}

	filename = argv[1];

	validate_file(filename);

	return (0);
}
