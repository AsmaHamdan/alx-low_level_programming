#include "lists.h"

/**
 * pop_listint - pop_listint
 * @head: point to the head of the list
 *
 * Return: return DATA
 */
int pop_listint(listint_t **head)
{
	listint_t *poT;
	int data = 0;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	poT = *head;
	data = poT->n;
	*head = poT->next;

	free(poT);

	return (data);
}
