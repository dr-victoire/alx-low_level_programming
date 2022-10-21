#include "lists.h"

/**
 * free_list - fress a linked list
 * @head: the list head
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t = *h;

	while (head != NULL)
	{
		free(h->str);
		free(h->len);
		free(h->next);
	}
}
