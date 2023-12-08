#include "lists.h"
#include <stdlib.h>


/**
 * list_len - number of nodes in linked list
 * @h: pointer to nodes
 *
 * Return: number of elemnts in that list
 * **/
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
