#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_listint - function that prints all the elements of a listint_t list.
  *
  *@h: linked list
  *
  *Return: nodes
  *
  */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
