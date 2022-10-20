#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list
 * @h: name of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int n;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			n++;
			h = h->next;
		}
	}

	return (n);
}
