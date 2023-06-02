#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
  *list_len - function that returns the number of elements in a linked
  *
  *@h: pointer
  *Return: element
  */
size_t list_len(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		v++;
		h = h->next;
	}
	return (v);
}
