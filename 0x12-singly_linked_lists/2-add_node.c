#include "lists.h"

/**
 * get_length - returning the length of a string
 * @str: determining the length
 *
 * Return: length of the element
 */
unsigned int get_length(const char *str)
{
	unsigned int k, length = 0;

	if (str == NULL)
		return (0);

	k = 0;
	while (str[k] != '\0')
	{
		length++;
		k++;
	}
	return (length);
}

/**
 * add_node - add a node at the beginning list
 * @head: pointer to first node of list_t
 * @str: strings
 * Return: pointers to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *) malloc(sizeof(list_t));
	unsigned int len;

	if (new == NULL)
		return (NULL);
	len = get_length(str);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
