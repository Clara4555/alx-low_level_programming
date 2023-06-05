#include <stdlib.h>
#include <stdio.h>
#include"lists.h"
/**
  *pop_listint - function that deletes the head node
  *@head: pointer
  *
  *Return: if the linked list is empty return 0
  */
int pop_listint(listint_t **head)
{
	listint_t *f;
	int a;

	if (!head || !*head)
		return (0);
	a = (*head)->n;
	f = (*head)->next;
	free(*head);
	*head = f;
	return (a);
}
