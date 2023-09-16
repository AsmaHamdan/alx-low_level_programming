#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);

}

/**
 * largest_prime_factor - finds and prints the largest
 *		prime factor of the number
 *
 * @num: number of find
*/

void largest_prime_factor(long int num)
{
	int prmnu, largest;

	/* first divide with the smallest prime number (two) */
	while (num % 2 == 0)
	while (num % 2 == 0)
		num = num / 2;

	/* num must be odd so we proceed to the next prime number (plus two) */
	for (prmnu = 3; prmnu <= _sqrt(num); prmnu += 2)
	{
		while (num % prmnu == 0)
		{
			num = num / prmnu;
			largest = prmnu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{

	largest_prime_factor(612852475143);

	return (0);
}
