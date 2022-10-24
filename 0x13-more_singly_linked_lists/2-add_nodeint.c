#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: the head
 * @n: the new node to be added
 *
 * Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = head;
	*head = newNode;

	return (*head);
}
