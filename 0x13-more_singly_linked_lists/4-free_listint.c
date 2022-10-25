#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: the head
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *h;

	while (head != NULL)
	{
		h = head->next;
		free(head->n);
		free(head);
		head = h;
	}
}
