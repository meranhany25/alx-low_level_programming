#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE 18/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file,
 * the function prints an error message
 * to stderr and exits with a status code of 98.
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
	fprintf(stderr, "Usage: elf_header elf_filename\n");
	exit(98);
}

int fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
	fprintf(stderr, "Error: Can't read from file\n");
	exit(98);
}

unsigned char buffer[BUF_SIZE];
read(fd, buffer, BUF_SIZE);

elf_magic(buffer);
int bit_mode = elf_class(buffer);
int big_endian = elf_data(buffer);
elf_version(buffer);
elf_osabi(buffer);
elf_abivers(buffer);
elf_type(buffer, big_endian);

lseek(fd, 24, SEEK_SET);
read(fd, buffer, bit_mode / 8);

elf_entry(buffer, bit_mode, big_endian);

close(fd);

return (0);
}
