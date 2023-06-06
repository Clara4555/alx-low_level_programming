#include "lists.h"
#include <stdio.h>
size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
  *looped_listint_len - loops through number of unique nodes
  *@head: pointer
  *Return: 0 otherwise unique node
  */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	t = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				nodes++;
				t = t->next;
				h = h->next;
			}
			t = t->next;
			while (t != h)
			{
				nodes++;
				t = t->next;
			}
			return (nodes);
		}
		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}

/**
  *print_listint_safe - function that prints a listint_t linked list
  *@head: pointer
  *Return: nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *) head, head->n);
	}
	return (nodes);
}
