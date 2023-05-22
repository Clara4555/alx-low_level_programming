#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
  *print_dog - function that prints a struct dog
  *@d: struct dog to be printed
  *
  *
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n Age: %f\n owner: %s\n", d->name, d->age, d->owner);
}
