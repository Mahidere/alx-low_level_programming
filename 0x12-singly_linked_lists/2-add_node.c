#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: pointer
 * @str: new string
 *
 * Return: Address of the new string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[l])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
