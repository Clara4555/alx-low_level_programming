#include <stdio.h>
#include "lists.h"
/**
  *free_listint_safe -  function that frees a listint_t list.
  *@h:pointer
  *
  *Return: the size of the list that was free’d
  */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int fr;
	listint_t *t;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		fr = *h - (*h)->next;
		if (fr > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
