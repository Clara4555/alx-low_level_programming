#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
  *add_node_end - function that adds a new node at the end of a list_t
  *@str: string
  *@head: pointer
  *
  *Return:address
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (t->next)
		t = t->next;
	t->next = new;
	return (new);
}
