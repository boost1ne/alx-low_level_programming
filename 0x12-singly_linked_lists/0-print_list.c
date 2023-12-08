#include <stdio.h>
#include <lists.h>
/**
 * print_list - prints elements of list_t
 * @h: pointer the list's node
 *
 * * Return: number of printed nodes
****/

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}

