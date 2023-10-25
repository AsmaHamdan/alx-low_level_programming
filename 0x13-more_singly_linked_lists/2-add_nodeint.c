#include "lists.h"

/**
 * add_nodeint - Write a function that adds
 * a new node at the beginning of a listint_t list
 * @head: the address of the new element
 * @n: the value for new node
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node = malloc(sizeof(listint_t));
	size_t NEXT = 0;

	if (!head || !first_node)
	{
		return (NULL);
	first_node->next = NULL;
	first_node->n = n;
	}
	if (*head)
	{
		first_node->next = *head;
	*head = first_node;
	}
	return (first_node);
}
