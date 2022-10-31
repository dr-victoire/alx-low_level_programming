#include "lists.h"

/**
 * get_nodint_at_index - returns the data of the nth node of a linked list
 * @head: the head
 * @index: the index starting from 0
 *
 * Return: the data of the index or NULL if the index doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (head != NULL)
	{
		for (i = 0; i <= index; i++)
		{
			if (i == index)
			{
				return (head->n);
			}
			head = head->next;
		}
	}
}
