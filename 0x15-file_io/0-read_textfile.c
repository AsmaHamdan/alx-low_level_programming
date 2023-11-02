#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fi = open(filename, O_RDONLY);
	if (fi == -1)
		return (0);
	bytes = read(fi, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fi);
	return (bytes);
}
