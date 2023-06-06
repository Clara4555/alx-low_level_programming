#include <stdio.h>
#include "lists.h"
/**
  *reverse_listint - function that reverses a listint_t linked list.
  *@head: pointer
  *
  *Return: *head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *b = NULL;

	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = a;
	return (*head);
}
