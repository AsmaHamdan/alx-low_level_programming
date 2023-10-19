#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees_list
 * @head: first head
 */
void free_list(list_t *head)
{
	list_t *FIRST;

	while (head)
	{
		FIRST = head->next;
		free(head->str);
		free(head);
		head = FIRST;
	}
}
