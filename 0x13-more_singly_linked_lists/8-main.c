#include "lists.h"

/**
 * main - checks code
 *
 * Return: 0 Always
 */

int main(void)
{
	listint_t *head;
	int sum;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 90);
	add_nodeint_end(&head, 77);
	node = get_nodeint_at_index(head, 3)
	printf("%d\n", node->n);

	free_listint2(&head);
	return (0);
}
