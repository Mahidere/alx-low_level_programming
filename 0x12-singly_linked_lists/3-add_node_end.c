#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the string
 *
 * @head: head
 * @str: string
 *
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new, *temp;
    size_t ch;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);

    for (ch = 0; str[ch]; ch++)
        ;

    new->len = ch;
    new->next = NULL;
    temp = *head;

    if (temp == NULL)
    {
        *head = new;
    }
    else
    {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new;
    }

    return (*head);
}
