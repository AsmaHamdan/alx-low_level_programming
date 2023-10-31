#include "main.h"

/**
 * set_bit - set bit
 * @n: poi
 * @index: index
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int extrzc;

	if (index >= (8 * sizeof(unsigned long int)))
	{
		return (-1);
	}

	extrzc = 1UL << index;
	*n |= extrzc;

	return (1);
}
