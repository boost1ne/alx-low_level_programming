#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of the list
 * @h: pointer to the list
 *
 * Return: number of nodes
**/

size_t print_listint(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		printf("%d", h->n);
		nb++;
		h = h->next;
	}
	return (nb);


}
