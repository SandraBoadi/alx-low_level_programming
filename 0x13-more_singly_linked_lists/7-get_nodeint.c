#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Head of the list
 * @index: Position to get
 *
 * Return: Address of the element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int m = 0;

	for (; head != NULL; m++, head = head->next)
		if (m == (int) index)
			return (head);

	return (NULL);
}
