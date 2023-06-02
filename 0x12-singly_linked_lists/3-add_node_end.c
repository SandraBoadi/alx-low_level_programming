#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - appends a new node at the end of a list_t list
 * @str: a string
 * @head: a double pointer to the head of the list and string
 * Return: the address of the new elements or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *latest;
	list_t *temp;

	unsigned int len = 0;

	while (str[len])
		len++;
	latest = malloc(sizeof(list_t));

	if (!latest)
		return (NULL);

	latest->str = strdup(str);
	latest->len = len;
	latest->next = NULL;

	if (*head == NULL)
	{
		*head = latest;
		return (latest);
	}

	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = latest;
	}

	return (latest);
}
