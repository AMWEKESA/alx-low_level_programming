#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initializes values of dog struct
  *
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * @d: pointer to struct dog
  *
  *Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

}
