#include "lists.h"
#include <stdio.h>

/**
 * listint_len -  function returns a number of elements in a linked listint_t
 * @h: A pointer
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
