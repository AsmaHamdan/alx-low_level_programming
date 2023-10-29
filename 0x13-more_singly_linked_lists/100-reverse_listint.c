#include "lists.h"

/**
 * reverse_listint - reverse_listint
 * @head: pointer to the head of the list
 *
 * Return: return pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *F_node, *vers;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}
	F_node = *head;
	vers = F_node->next;

	reverse_listint(&vers);

	F_node->next->next = F_node;
	F_node->next = NULL;
	*head = vers;
	return (*head);
}
