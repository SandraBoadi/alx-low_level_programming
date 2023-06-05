#include "lists.h"
#include <stdio.h>

/**
* print_listint - Output all the elements of a listint_t list.
* @h: Head of list
*
* Return: Numbers of elements
*/
size_t print_listint(const listint_t *h)
{
	unsigned int m;

	for (m = 0; h != NULL; m++, h = h->next)
	{
		printf("%d\n", h->n);
	}

	return (m);
}
