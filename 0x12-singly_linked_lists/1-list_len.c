#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  *
  *
  *
  *
  8
  */
size_t list_len(const list_t *h)
{
	int v = 0;

	while (h)
	{
		v++;
		h = h->next;
	}
	return (v);
}
