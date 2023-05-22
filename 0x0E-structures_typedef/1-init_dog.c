#include <stdlib.h>
#include "dog.h"
/**
  *init_dog -  function that initialize a variable of type struct dog
  *@age: age
  *@d: pointer
  *@owner: owner
  *@name: name
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->age = age;
	d->owner = owner;
	d->name = name;
}
