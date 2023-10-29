#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: point to the head of the list
 *
 * Return: address of the new
 */
void free_listint2(listint_t **head)
{
	listint_t *Tis_nod;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		Tis_nod = *head;
		*head = (*head)->next;
		free(Tis_nod);
	}
	*head = NULL;
}
