#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
  *free_listint - function that frees a listint_t list.
  *@head: list to be freed
  *
  *Return: always 0
  *
  */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
