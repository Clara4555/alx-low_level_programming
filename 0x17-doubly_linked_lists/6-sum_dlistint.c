#include "lists.h"
#include<stdio.h>
/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 * @head: head
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_list;

	sum_list = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_list += head->n;
			head = head->next;
		}
	}
	return (sum_list);
}
