#include "lists.h"

/**
 * add_nodeint-end - Appends a new node at the end of a listint_t list
 * @head: Head of the list
 * @n: Value of the latest element
 * Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *latest, *aux;

        if (head == NULL)
                return (NULL);

        latest = malloc(sizeof(listint_t));
        if (head == NULL)
                return (NULL);
        latest->n = n;
        latest->next = NULL;

        if (head == NULL)
        {
                *head = latest;
                return (latest);
        }

        aux = *head;
        while (aux->next != NULL)
        {
                aux = aux->next;
        }

        aux->next = latest
                return (latest);
}
