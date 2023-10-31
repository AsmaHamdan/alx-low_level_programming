#include "main.h"

/**
 * binary_to_uint - converts a binary number string
 * @b: is pointer to the string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bainary = 0;
	int value;

	if (!b)
		return (0);

	for (value = 0; b[value] != '\0'; value++)
	{
		if (b[value] != '0' && b[value] != '1')
			return (0);
		bainary = (bainary << 1) | (b[value] - '0');
	}

	return (bainary);
}
