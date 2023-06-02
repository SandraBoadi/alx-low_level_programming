#include "lists.h"
#include <stddef.h>

/**
 * list_len - output number of elements in a linked list_t list.
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int iterate = 1;

	if (h == NULL)
		return (0);

	for (; h->next != NULL; iterate++)
		h = h->next;

	return (iterate);
}
