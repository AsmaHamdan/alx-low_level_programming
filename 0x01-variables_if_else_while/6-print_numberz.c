#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *		with using int variable
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		printf(digit + '0');
		digit++;
	}
	printf("\n");

	return (0);
}
