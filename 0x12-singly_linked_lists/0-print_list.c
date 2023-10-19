#include "lists.h"

/**
 * print_list - print all members of the listing
 * @h: pointing to node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int k = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		k++;
		h = h->next;
	}
	return (k);
}
