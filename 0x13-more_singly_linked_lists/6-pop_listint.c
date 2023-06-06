#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Eliminate the head node of a listint_t linked list
 * @head: Double pointer
 * Return: Head node's data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n_aux;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = (*head)->next;
	n_aux = (*head)->n;
	free(*head);
	*head = temp;

	return (n_aux);
}
