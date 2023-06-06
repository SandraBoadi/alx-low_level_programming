#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node
 * @head: Double pointer
 * @n: constant integer
 *
 * Return: Address of thenew element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *latest;

	if (head == NULL)
		return (NULL);

	latest = malloc(sizeof(listint_t));
			if (latest == NULL)
			return (NULL);

			latest->n = n;

			latest->next = *head;
			*head = latest;

			return (latest);
}
