#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the linked listint_t list.
 * @index: The index of the node to return (starting at 0).
 *
 * Return: If the node does not exist, return NULL. Otherwise, return the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeIndex;

	for (nodeIndex = 0; nodeIndex < index; nodeIndex++)
	{
		if (!head)
			return (NULL);

		head = head->next;
	}

	return (head);
}

