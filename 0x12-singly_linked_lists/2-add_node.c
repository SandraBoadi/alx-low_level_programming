#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - appends a new node at the beginning
 * @head: head pointer
 * @str: string variable in the list
 * Return: head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *latest;
	unsigned int len = 0;

	while (str[len])
		len++;

	latest = malloc(sizeof(list_t));
	if (!latest)
		return (NULL);

	latest->str = strdup(str);
	latest->len = len;
	latest->next = *head;

	*head = latest;
	return *head;
}
