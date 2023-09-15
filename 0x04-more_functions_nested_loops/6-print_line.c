#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: is the number of times the _character  should be printed.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)

			_putchar(' ');

		_putchar('\n');
	}
}
