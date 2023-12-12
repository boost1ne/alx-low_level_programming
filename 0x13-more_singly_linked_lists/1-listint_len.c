#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list to print of type listint_t
 *
 * Return: length of the list
***/

size_t listint_len(const listint_t *h)
{
	int size = 0;


	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
