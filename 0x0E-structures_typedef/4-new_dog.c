#include "dog.h"
#include <stdlib.h>
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

	if (name != NULL)
	{
		new = malloc(sizeof(dog_t));
		if (new == NULL)
			return (NULL);
	}
	new->name = malloc(sizeof(name));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	if (owner != NULL)
	{
		new->owner = malloc(sizeof(owner));
		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}
	}
	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
