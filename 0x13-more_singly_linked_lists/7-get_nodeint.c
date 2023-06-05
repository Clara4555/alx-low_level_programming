#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  *get_nodeint_at_index -  function that returns the nth node
  *@index: index
  *@head: node
  *
  *Return: where index is the index of the node, starting at 0
  *if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *f = head;

	while (f && a < index)
	{
		f = f->next;
		a++;
	}
	return (f ? f : NULL);
}
