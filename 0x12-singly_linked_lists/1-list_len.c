#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t lists
 * @h: Pointers to the lists
 *
 * Return: numbers of nodes
 */
size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
