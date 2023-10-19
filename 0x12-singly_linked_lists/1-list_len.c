#include "lists.h"

/**
 * list_len - lenght of the lists
 * @h: pointing to the list node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
