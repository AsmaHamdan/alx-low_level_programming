#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);


/**
 * print_magic - prints ELF magic bytes
 * @h: the ELF header struct
 *
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - prints ELF class
 * @h: the ELF header struct
 *
 */
void print_class(Elf64_Ehdr h)
{
	printf(" Class:                     ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}
/**
 * print_data - prints ELF data
 * @h: the ELF header struct
 *
 */
void print_data(Elf64_Ehdr h)
{
	printf(" Data:                      ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf(" 2's complement, big endian");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_version - prints ELF version
 * @h: the ELF header struct
 *
 */
void print_version(Elf64_Ehdr h)
{
	printf(" Version:                &d, h.e_ident[EI_VERSION]");
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s",  "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi - prints ELF osabi
 * @h: the ELF header struct
 *
 */
void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:               ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - L inux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX -freeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX -TRU64");
			break;
		default:
			print_osabi_more(h);
			break;
	}
	printf("\n");
}

/**
 * print_osabi_more - prints ELF osabi more
 * @h: the ELF header struct
 *
 */
void print_osabi_more(Elf64_Ehdr h)
{
	printf("  OS/ABI:               ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_ abiversion - prints ELF abiversion
 * @h: the ELF header struct
 *
 */
void print_abiversion(Elf64_Ehdr h)
{
	printf(" ABI version:               %d\n",
	h.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints ELF type
 * @h: the ELF header struct
 *
 */
void print_type(Elf64_Ehdr h)
{
	char *p = (char *)&h.e_type;
	int i = 0;

	printf("  type:               ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i - 1;
	switch (p[i])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", p[i]);
			break;
	}
	printf("\n");
}

/**
 * print_entry - prints ELF entry point
 * @h: the ELF header struct
 *
 */
void print_entry(Elf64_Ehdr h)
{
	int i = 0, len = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);
		printf("\n");
	}
}
