#include "lists.h"

/**
 * free_listint - a func that frees a listint_t list
 * @head: point to the head of the list
 *
 * Return: address of the new
 */
void free_listint(listint_t *head)
{
	listint_t *Tis_nod;

	while (head != NULL)
	{
		Tis_nod = head;
		head = head->next;
		free(Tis_nod);
	}
}
