#include "lists.h"

/**
 * add_nodeint - dds a new node at the beginning of a list
 * @head: pointer to iur lists head
 * @n: element of the list (data part)
 * Return: Adress of a new node at the beginning of the list
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newFirst;

	newFirst = malloc(sizeof(listint_t));

	if (!newFirst)

		return (NULL);

	newFirst->n = n;
	newFirst->next = *head;
	*head = newFirst;

	return (newFirst);

}
