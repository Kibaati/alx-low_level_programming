#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the start of a listint_t
 * @head: A pointer
 * @n: another pointer
 * Return: The number of an element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;

*head = new;

return (new);
}
