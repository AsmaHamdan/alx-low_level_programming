#include "lists.h"

/**
 * add_nodeint_end - will add node in the end
 * @head: poiter to the head
 * @n:is an integer value
 *
 * Return: the new npde
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *Tis_nod;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	Tis_nod = *head;
	while (Tis_nod->next != NULL)
	{
		Tis_nod = Tis_nod->next;
	}

	Tis_nod->next = new;
	return (new);
}
