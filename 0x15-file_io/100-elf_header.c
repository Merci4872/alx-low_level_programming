#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 128

/**
* error_exit - Print an error message and exit with a status code
* @msg: The error message to print
* @status: The exit status
*/
void error_exit(const char *msg, int status)
{
dprintf(2, "%s\n", msg);
exit(status);
}

/**
* print_elf_header - Display information from ELF header
* @header: Pointer to the ELF header structure
*/
void print_elf_header(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x%c", header->e_ident[i], (i < EI_NIDENT - 1) ? ' ' : '\n');
printf("  Class:                             %s\n",
header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
(header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid class"));
printf("  Data:                              %s\n",
header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
(header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid data"));
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n",
header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Invalid OS/ABI");
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n",
header->e_type == ET_EXEC ? "EXEC (Executable file)" :
(header->e_type == ET_DYN ? "DYN (Shared object file)" :
(header->e_type == ET_REL ? "REL (Relocatable file)" : "Invalid type")));
printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
error_exit("Usage: elf_header elf_filename", 98);

fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit("Error: Cannot open file", 98);

if (read(fd, &header, sizeof(header)) != sizeof(header))
error_exit("Error: Cannot read ELF header", 98);

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
error_exit("Error: Not an ELF file", 98);

print_elf_header(&header);

close(fd);
return 0;
}

