#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  *sum_listint - function that returns the sum of all the data (n)
  *@head:node
  *Return: sum of data
  */
int sum_listint(listint_t *head)
{
	int summation = 0;
	listint_t *f = head;

	while (f)
	{
		summation += f->n;
		f = f->next;
	}
	return (summation);
}
