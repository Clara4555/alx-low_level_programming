#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head
 * Return: Always 0 success
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
