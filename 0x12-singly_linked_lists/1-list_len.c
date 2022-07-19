#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Prints the number of elements in a linked list
 *
 * @h: Head node pointer
 *
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
