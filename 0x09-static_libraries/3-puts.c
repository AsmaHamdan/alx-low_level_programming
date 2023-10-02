#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 *
 * @str: string parameters to print
 *
 * Return: Always 0 (success)
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;

	}
	putchar('\n');
}
