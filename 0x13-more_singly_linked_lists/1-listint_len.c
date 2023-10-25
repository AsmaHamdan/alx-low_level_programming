#include "lists.h"

/**
 * listint_len - Write a function that returns
 * the number of elements in a linked listint_t list
 * @h: the value must retern
 * Return: return NEXT value
 */
size_t listint_len(const listint_t *h)
{
	size_t NEXT = 0;

        while (h)
        {
		h = h->next;
		NEXT++;
	}
	return (NEXT);
}
