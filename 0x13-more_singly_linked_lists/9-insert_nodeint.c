#include "lists.h"
#include <stdio.h>
/**
  *insert_nodeint_at_index - function that inserts a new node
  *@n: data
  *@idx: index
  *@head: pointer
  *Return:  the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *t;
	listint_t *f = *head;

	t = malloc(sizeof(listint_t));
	if (!t || !head)
		return (NULL);
	t->n = n;
	t->next = NULL;
	if (idx == 0)
	{
		t->next = *head;
		*head = t;
		return (t);
	}
	for (a = 0; f && a < idx; a++)
	{
		if (a == idx - 1)
		{
			t->next = f->next;
			f->next = t;
			return (t);
		}
		else
			f = f->next;
	}
	return (NULL);
}
