#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function thats allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *poit_to;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	poit_to = malloc(nmemb * size);
	if (poit_to == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		poit_to[i] = 0;
	return (poit_to);
}
