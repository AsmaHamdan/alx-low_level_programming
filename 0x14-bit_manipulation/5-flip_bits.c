#include "main.h"

/**
 * flip_bits - flip bits
 * @n: st
 * @m: end
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m, CC = 0;

	while (XOR > 0)
	{
		CC += XOR & 1;
		XOR >>= 1;
	}
	return (CC);
}
