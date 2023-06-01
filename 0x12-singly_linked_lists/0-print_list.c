#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
  *print_list - function that prints all the elements of a list_t list
  *@h:pointer
  *
  *Return: nodes
  */
size_t print_list(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		v++;
		h = h->next;
	}
	return (v);
}
