#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  *listint_len - function that prints all the elements of a listint_t list
  *
  *@h: nodes
  *
  *Return: nodes
  *
  */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
