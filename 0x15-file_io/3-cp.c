#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file%s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %s\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @ac : argument count
 * @av : argumwnt vector 
 *
 * Return: 1 on success, -1 on failure 
 */
int main(int ac, char **av)
{
	int from_fi = 0, to_fi = 0;
	ssize_t a;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fi = open(av[1], O_RDONLY);
	if (from_fi == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fi = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fi == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((a = read(from_fi, buf, READ_BUF_SIZE)) > 0)
		if (write(to_fi, buf, a) !=a)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (a == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_fi = close(from_fi);
	to_fi = close(to_fi);
	if (from_fi)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fi), exit(100);
	if (to_fi)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fi), exit(100);

	return (EXIT_SUCCESS);
}
