#include "lists.h"
#include<stdio.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head
 * @index: index
 * Return: Null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;
	dlistint_t *p;

	s = 0;
	if (head == NULL)
	return (NULL);

	p = head;
	while (p)
	{
	if (index == s)
	return (p);
	s++;
	p = p->next;
	}
	return (NULL);
}
