#include "lists.h"

/**
 * get_nodeint_at_index - get nodein at index
 * @head: point to the head of the list
 * @index: unm o ind
 *
 * Return: return NULL value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL)
	{
		if (counter == index)
	{
			return (head);
	}
		head = head->next;
		counter++;
	}

	return (NULL);
}
