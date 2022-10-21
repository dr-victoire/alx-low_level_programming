#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the name of the list structure
 *
 * Return: the number of nodes
 */

size_t print_list(list_t *h)
{
	int node_count = 0;

	h = malloc(sizeof(list_t) * node_count);

	if (h == NULL)
		return (-1);
	while (h)
	{
		if (str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		node_count++;
	}
	return (node_count);
}
