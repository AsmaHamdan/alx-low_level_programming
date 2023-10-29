#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a
 * linked listint_t lis
 * @h: value must to be return
 * Return: return
 */

size_t listint_len(const listint_t *h)
{
	size_t NEX = 0;

	while (h != NULL)
	{
		NEX++;
		h = h->next;
	}

	return (NEX);
}
