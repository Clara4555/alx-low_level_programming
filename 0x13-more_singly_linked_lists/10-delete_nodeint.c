#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  *delete_nodeint_at_index - func delets nodes at index
  *@index: index
  *@head: pointer
  *
  *Return: 1 or -1 otherwise
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *f = *head;
	listint_t *delete = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(f);
		return (1);
	}
	while (a < index - 1)
	{
		if (!f || !(f->next))
			return (-1);
		f = f->next;
		a++;
	}
	delete = f->next;
	f->next = delete->next;
	free(delete);
	return (1);
}
