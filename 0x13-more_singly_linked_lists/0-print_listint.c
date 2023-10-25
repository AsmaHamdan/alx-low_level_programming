#include "lists.h"

/**
 * print_listint - Write a function that prints all
 * the elements of a listint_t list
 * @h: the value must retern
 * Return: return NEXT value
 */
size_t print_listint(const listint_t *h)
{
	size_t NEXT = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		NEXT++;
	}
	return (NEXT);
}
