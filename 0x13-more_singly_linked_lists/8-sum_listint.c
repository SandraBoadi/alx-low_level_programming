#include "lists.h"

/**
 * sum_listint - Sum of all the data (n) of a listint_t linked list
 * @head: Head ro te list
 *
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
