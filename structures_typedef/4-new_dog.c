#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* _strcpy - copy a string
* @a: string to copy
* Return: point to string copy
*/

char *_strcpy(char *a)
{
	int i;
	char *ptr;

	for (i = 0; a[i]; i++)
		;
	ptr = malloc(i + 1);

	if (ptr)
	{
		for (; i >= 0; i--)
			ptr[i] = a[i];
	}
	return (ptr);
}

/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: dog struc or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(*p));
	if (p == NULL)
		return (NULL);
	(*p).name = _strcpy(name);
	if ((*p).name == NULL)
	{
		free(p);
		return (NULL);
	}
	(*p).age = age;
	(*p).owner = _strcpy(owner);
	if ((*p).owner == NULL)
	{
		free((*p).name);
		free(p);
		return (NULL);
	}
	return (p);
}
