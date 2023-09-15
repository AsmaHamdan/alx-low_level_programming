#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: is the number of times the _character  should be printed.
 */
void print_line(int n)
{
	int InChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (InChr = 1; InChr <= n; InChr++)
			_putchar(' ');
		_putchar('\n');
	}
}
