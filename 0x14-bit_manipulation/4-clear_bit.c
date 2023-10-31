#include "main.h"

/**
 * clear_bit - clear bit
 * @n: poi
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int extect;

	if (index >= (8 * sizeof(unsigned long int)))
	{
		return (-1);
	}

	extect = 1UL << index;

	*n &= ~extect;

	return (1);
}
