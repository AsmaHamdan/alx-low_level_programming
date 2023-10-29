#include "lists.h"

/**
 * add_nodeint - will add node in the begi
 * @head: poiter to the head
 * @n:is an integer value
 *
 * Return: the new npde
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
