#include "lists.h"

/**
 * free_list - releasees a list_t list.
 * @head: head pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold->str);
		free(hold);

	}
}
