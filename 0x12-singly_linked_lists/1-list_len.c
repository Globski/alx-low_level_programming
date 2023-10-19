#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t countElement = 0;

	while (h != NULL)
	{
		countElement++;
		h = h->next;
	}

	return (countElement);
}
