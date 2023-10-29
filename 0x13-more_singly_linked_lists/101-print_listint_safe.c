#include "lists.h"

/**
 * print_listint_safe - print_listint_safe
 * @head: pointer to the head of the list
 *
 * Return: return pointer to the first node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	const listint_t *Tis_nod = head;
	const listint_t *TT = NULL;

	while (Tis_nod != NULL)
	{
		c++;
		printf("[%p] %d\n", (void *)Tis_nod, Tis_nod->n);
		TT = Tis_nod;
		Tis_nod = Tis_nod->next;

		if (TT <= Tis_nod)
		{
			printf("-> [%p] %d\n", (void *)Tis_nod, Tis_nod->n);
			exit(98);
		}
	}

	return (c);
}
