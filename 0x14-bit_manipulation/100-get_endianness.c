#include "main.h"

/**
 * get_endianness - get_endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int SEV = 1;
	char *B = (char *)&SEV;

	if (*B)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
