include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string length to check
 *
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fi;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fi = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fi == -1)
		return (-1);
	if (len)
		bytes = write(fi, text_content, len);
	close(fi);
	return (bytes == len ? 1 : -1);
}
