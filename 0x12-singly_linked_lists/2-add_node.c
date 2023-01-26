#include "lists.h"

/**
 * add_node - Entry point
 * @head: input
 * @str: string
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = *str;
	new->next = *head;

	*head = new;

	return (new);
}
