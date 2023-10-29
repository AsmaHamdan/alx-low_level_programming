#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @idx: index
 * @head: A pointer.
 * @n: int val
 *
 * Return: return address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *Tis;
	unsigned int coun = 0;

	if (head == NULL)
    {
		return (NULL);
    }
	new = malloc(sizeof(listint_t));
	if (new == NULL)
    {
		return (NULL);
    }

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	Tis = *head;
	while (Tis != NULL)
	{
		if (coun == idx - 1)
		{
			new->next = Tis->next;
			Tis->next = new;
			return (new);
		}
		Tis = Tis->next;
		coun++;
	}
	free(new);
	return (NULL);
}
