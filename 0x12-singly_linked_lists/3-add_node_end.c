#include "lists.h"

/**
 * get_length - returning the length of a string
 * @str: the ng parameter
 *
 * Return: length of the @ste
 */
unsigned int get_length(const char *str)
{
	int k, length = 0;

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
 * add_node_end - adding a new node to end of linked list
 * @head: pointer to pointer to linked list
 * @str: this set the str attribute of the new node
 *
 * Return: address of linked list of NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	len = get_length(str);
	last = *head;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}
