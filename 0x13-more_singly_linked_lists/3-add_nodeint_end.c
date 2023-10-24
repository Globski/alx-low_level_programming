#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *end;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	else
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = newNode;
	}
	return (newNode);
}
