#include "main.h"

/**
 * print_binary - Printsbinary
 *
 * @n: n
 */

void print_binary(unsigned long int n)
{
	int BIT_ = 0, NUMBERS = 8 * sizeof(n), Ind;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (Ind = NUMBERS - 1; Ind >= 0; Ind--)
	{
		unsigned long int batc = 1UL << Ind;

		if ((n & batc) != 0)
		{
			BIT_ = 1;
			_putchar('1');
		}
		else if (BIT_)
		{
			_putchar('0');
		}
	}
}
