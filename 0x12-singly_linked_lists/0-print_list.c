#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: the listint_t to print
 * Return: the number of nodes in h
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
