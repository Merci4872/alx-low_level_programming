#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_magic(Elf64_Ehdr *ehdr);
void print_class(Elf64_Ehdr *ehdr);
void print_data(Elf64_Ehdr *ehdr);
void print_version(Elf64_Ehdr *ehdr);
void print_osabi(Elf64_Ehdr *ehdr);
void print_abi_version(Elf64_Ehdr *ehdr);
void print_type(Elf64_Ehdr *ehdr);
void print_entry(Elf64_Ehdr *ehdr);

/**
 * print_elf_header - prints ELF header information
 * @ehdr: ELF header
 */
void print_elf_header(Elf64_Ehdr *ehdr) {
    if (ehdr->e_ident[EI_MAG0] != ELFMAG0 ||
        ehdr->e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr->e_ident[EI_MAG2] != ELFMAG2 ||
        ehdr->e_ident[EI_MAG3] != ELFMAG3) {
        dprintf(2, "Error: Not an ELF file\n");
        exit(98);
    }

    print_magic(ehdr);
    print_class(ehdr);
    print_data(ehdr);
    print_version(ehdr);
    print_osabi(ehdr);
    print_abi_version(ehdr);
    print_type(ehdr);
    print_entry(ehdr);
}

/**
 * print_magic - prints ELF magic
 * @ehdr: ELF header
 */
void print_magic(Elf64_Ehdr *ehdr) {
    int i;

    printf("ELF Header:\n  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", ehdr->e_ident[i], i + 1 < EI_NIDENT ? ' ' : '\n');
}

/**
 * print_class - prints ELF class
 * @ehdr: ELF header
 */
void print_class(Elf64_Ehdr *ehdr) {
    printf("  Class:                             ");
    switch (ehdr->e_ident[EI_CLASS]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", ehdr->e_ident[EI_CLASS]);
    }
}

/**
 * print_data - prints ELF data encoding
 * @ehdr: ELF header
 */
void print_data(Elf64_Ehdr *ehdr) {
    printf("  Data:                              ");
    switch (ehdr->e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", ehdr->e_ident[EI_DATA]);
    }
}

/**
 * print_version - prints ELF version
 * @ehdr: ELF header
 */
void print_version(Elf64_Ehdr *ehdr) {
    printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
}

/**
 * print_osabi - prints ELF OS/ABI
 * @ehdr: ELF header
 */
void print_osabi(Elf64_Ehdr *ehdr) {
    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
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
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
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
        case ELFOSABI_MODESTO:
            printf("Novell - Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        default:
            printf("<unknown: %x>\n", ehdr->e_ident[EI_OSABI]);
    }
}

/**
 * print_abi_version - prints ELF ABI version
 * @ehdr: ELF header
 */
void print_abi_version(Elf64_Ehdr *ehdr) {
    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints ELF type
 * @ehdr: ELF header
 */
void print_type(Elf64_Ehdr *ehdr) {
    printf("  Type:                              ");
    switch (ehdr->e_type) {
        case ET_NONE:
            printf("NONE (Unknown type)\n");
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
            printf("<unknown: %x>\n", ehdr->e_type);
    }
}

/**
 * print_entry - prints ELF entry point address
 * @ehdr: ELF header
 */
void print_entry(Elf64_Ehdr *ehdr) {
    printf("  Entry point address:               %#lx\n", (unsigned long)ehdr->e_entry);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr ehdr;

    if (argc != 2) {
        dprintf(2, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        dprintf(2, "Error: Cannot read file '%s'\n", argv[1]);
        exit(98);
    }

    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
        dprintf(2, "Error: Cannot read ELF header\n");
        close(fd);
        exit(98);
    }

    print_elf_header(&ehdr);

    close(fd);
    return 0;
}

