#include "main.h"

/**
 * get_bit - Returns the value
 * @n: n
 * @index: index
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int extrac;
	int the_value;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	extrac = 1UL << index;
	the_value = (n & extrac) ? 1 : 0;

	return (the_value);
}
