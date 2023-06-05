#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *free_listint2 - function that frees a listint_t list
  *@head: pointer
  *Return: always 0
  */
void free_listint2(listint_t **head)
{
	listint_t *f;

	if (head == NULL)
		return;
	while (*head)
	{
		f = (*head)->next;
		free(*head);
		*head = f;
	}
	*head = NULL;
}
