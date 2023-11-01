#include "main.h"

/**
 * print_elf_error - prints an error message to
 * stderr and exits with the given code
 *
 * @code: the exit code
 * @message: the error message
 */
void print_elf_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}


/**
 * print_elf_header - display information from the ELF header
 * @header: pointer to the ELF header structure
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
            		printf(" ");
        	else
            		printf("\n");
	}
	printf("  Class:                             ELF%d\n",
			header->e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("  Data:                              %s\n",
			header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			get_osabi(header->e_ident[EI_OSABI]));
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			get_type(header->e_type));
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)header->e_entry);
}

const char *get_osabi(uint8_t osabi)
{
switch (osabi)
	{
        	case ELFOSABI_SYSV:
            		return("UNIX - System");
		case ELFOSABI_HPUX:
            		return("UNIX - HP-UX");
        	case ELFOSABI_NETBSD:
            		return("UNIX - NetBSD");
        	case ELFOSABI_LINUX:
            		return("UNIX - Linux");
        	case ELFOSABI_SOLARIS:
            		return("UNIX - Solaris");
        	case ELFOSABI_IRIX:
            		return("UNIX - IRIX");
        	case ELFOSABI_FREEBSD:
            		return("UNIX - FreeBSD");
        	case ELFOSABI_TRU64:
            		return("UNIX - TRU64");
        	case ELFOSABI_ARM:
            		return("ARM");
        	case ELFOSABI_STANDALONE:
            		return("Standalone App");
        	default:
            		return("<unknown>");
    	}
}

const char *get_type(uint16_t type)
{
switch (type)
	{
        	case ET_NONE:
            		return("NONE (None)");
        	case ET_REL:
            		return("REL (Relocatable file)");
        	case ET_EXEC:
            		return("EXEC (Executable file)");
        	case ET_DYN:
            		return("DYN (Shared object file)");
        	case ET_CORE:
            		return("CORE (Core file)");
        	default:
            		return("<unknown>");
    	}
}
/**
 * main - Entry point of the ELF header information display program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on failure (error message printed to stderr)
 */
int main(int argc, char *argv[])
{
	int fileDesc;
	Elf64_Ehdr header;

	if (argc != 2)
		print_elf_error(98, "Usage: elf_header elf_filename");

	fileDesc = open(argv[1], O_RDONLY);

	if (fileDesc == -1)
		print_elf_error(98, "Error: Can't open file");

	if (lseek(fileDesc, 0, SEEK_SET) == -1)
	{
		close(fileDesc);
		print_elf_error(98, "Error: Can't seek to the start of the file");
	}

	if (read(fileDesc, &header, sizeof(header)) != sizeof(header))
	{
		close(fileDesc);
		print_elf_error(98, "Error: Can't read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fileDesc);
		print_elf_error(98, "Error: Not an ELF file");
	}

	print_elf_header(&header);

	close(fileDesc);
	return (0);
}
