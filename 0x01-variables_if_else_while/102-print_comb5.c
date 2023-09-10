#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible
 * different combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int fristDigit = 0, seconDigit;

	while (fristDigit <= 99)
	{
		seconDigit = fristDigit;

		while (seconDigit <= 99)
		{

			if (seconDigit != fristDigit)
			{
				putchar((fristDigit / 10) + 48);
				putchar((fristDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((seconDigit / 10) + 48);

				if (fristDigit != 98 || seconDigit != 99)
				{
					putchar(',');
					putchar(',');
				}

			}
			seconDigit++;
		}
		fristDigit++;
	}
	putchar('\n');

	return (0);
}
