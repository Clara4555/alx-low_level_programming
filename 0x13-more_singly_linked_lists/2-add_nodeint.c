#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  *add_nodeint -  function that adds a new node at the beginning
  *
  *@head:pointer
  *@n:data
  *
  *Return: node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *c;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);
	c->n = n;
	c->next = *head;
	*head = c;
	return (c);
}
