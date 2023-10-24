#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A pointer to the pointer to the head of the list
 *
 * Description: This function reverses the given linked list in place
 * by reversing the "next" pointers of the list nodes.
 *
 * Return: A pointer to the first node of the reversed list, or NULL if empty.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	if (!head || !*head || !(*head)->next)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (prev);
}
