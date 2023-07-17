#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - gets length of string
  * @s: string whose length is to be determined
  *
  * Return: length
  */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != 0)
	{
		++x;
	}

	return (x);
}

/**
  * _strcpy - copies string
  * @dest: where th strin to to copied to
  * @src: string to be copied
  *
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int x, len;

	x = 0;
	len = 0;

	while (src[len] != '\0')
		len++;

	for (x = 0; x < len; ++x)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);

}

/**
  *new_dog - create new func new_dog
  *
  * @name: dog's neme
  * @age: dogo's age
  * @owner: dogs owner
  *
  * Return: pointer to new_dog, else NULL
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
