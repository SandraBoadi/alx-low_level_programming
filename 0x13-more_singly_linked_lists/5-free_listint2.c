#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees listint_t and set the function head to NULL
 * @head: Double pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	for (; *head != NULL ;)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}

	*head = NULL;
}
