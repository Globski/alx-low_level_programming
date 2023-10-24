#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list and
 * returns the data.
 *
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: If the linked list is empty - 0.
 * Otherwise - The data of the deleted node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	temp = *head;
	data = tmp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
