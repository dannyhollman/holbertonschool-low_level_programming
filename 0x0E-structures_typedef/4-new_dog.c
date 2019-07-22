#include "dog.h"
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * new_dog - creates new dog struct
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of the dog
  * Return: pointer to new struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	if (name != NULL)
	{
		new->name = name;
		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	if (owner != NULL)
	{
		new->owner = owner;
		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}
	}

	new->age = age;

	return (new);
}
