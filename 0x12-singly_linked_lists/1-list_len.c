#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the length
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t NUM = 0;

	while (h)
	{
		NUM++;
		h = h->next;
	}
	return (NUM);
}
