#include "dog.h"
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copies string to newly allocated space
 * @str: input string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
  int count = 0, loop = 0;

  char *array;

  if (str == NULL)
    {
      return (NULL);
    }

  while (str[count])
    {
      count++;
    }

  count++;

  array = malloc(count * sizeof(char));

  if (array == NULL)
    {
      return (NULL);
    }

  while (loop <= count)
    {
      array[loop] = str[loop];
      loop++;
    }
  return (array);
}
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
		new->name = _strdup(name);
		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	else
		new->name = _strdup("");

	if (owner != NULL)
	{
		new->owner = _strdup(owner);
		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}
	}
	else
		new->owner = _strdup("");

	new->age = age;

	return (new);
}
