#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - frees dog struct
  * @d: input struct
  */
void free_dog(dog_t *d)
{
	free(d);
}
