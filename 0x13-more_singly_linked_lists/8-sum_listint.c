#include "lists.h"

/**
 * sum_listint - sum_listint
 * @head: point to the head of the list
 *
 * Return: return data of sugm
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
