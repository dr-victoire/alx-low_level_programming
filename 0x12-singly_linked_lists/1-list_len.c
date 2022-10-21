#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list list_t
 * @h: the name of the linked list_t
 *
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
