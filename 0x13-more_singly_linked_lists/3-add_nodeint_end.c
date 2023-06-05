#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  *add_nodeint_end -  function that adds a new node at the end
  *
  *@n: data
  *@head: pointer
  *
  *Return: node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c;
	listint_t *t  = *head;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);
	c->n = n;
	c->next = NULL;
	if (*head == NULL)
	{
		*head = c;
		return (c);
	}
	while (t->next)
		t = t->next;
	t->next = c;
	return (c);
}
