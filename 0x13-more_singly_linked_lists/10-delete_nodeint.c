#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position in a list
 * @head: A pointer to the pointer to the head of the list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold, *temp;
	unsigned int nodeIndex;

	if (*head == NULL)
		return (-1);

	hold = *head;

	if (index == 0)
	{
		*head = hold->next;
		free(hold);
		return (1);
	}

	for (nodeIndex = 0; nodeIndex < index - 1; nodeIndex++)
	{
		if (hold == NULL)
			return (-1);
		hold = hold->next;
	}

	if (hold == NULL || hold->next == NULL)
		return (-1);

	temp = hold->next;
	hold->next = temp->next;
	free(temp);

	return (1);
}
