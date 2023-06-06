#include "lists.h"
#include <stdlib.h>

/**
 * Insert_nodeint_at_index - Insert a new node at a given position
 * @head: Double pointer
 * @idx: Index
 * @n: Value of the new element
 * Return: Address of the element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int m = 0;
	listint_t *latest;

	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
		return (NULL);

	latest->n = n;
	if (idx == 0)
	{
		latest->next = *head;
		*head = latest;

		return (latest);
	}
	for (; *head != NULL; m++)
	{
		if (m + 1 == (int) idx)
		{
			latest->next = (*head)->next;

			(*head)->next = latest;
			return (latest);
		}
		head = &(*head)->next;
	}
	return (NULL);
}
