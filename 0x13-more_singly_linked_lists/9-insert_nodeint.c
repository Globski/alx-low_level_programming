#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list
 * @head: A pointer to the pointer to the head of the list
 * @idx: The index at which the new node should be inserted
 * @n: The data for the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *hold;
	unsigned int nodeIndex;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	hold = *head;

	for (nodeIndex = 0; nodeIndex < idx - 1; nodeIndex++)
	{
		if (hold == NULL)
		{
			free(newNode);
			return (NULL);
		}
		hold = hold->next;
	}


	newNode->next = hold->next;
	hold->next = newNode;

	return (newNode);
}
