#include "lists.h"

/**
 * free_listint2 - frees a linked list, sets the head to NULL
 * @head: the head
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
}
