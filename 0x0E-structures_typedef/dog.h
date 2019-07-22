#ifndef DOG_H
#define DOG_H

/**
  * struct dog - struct with name, age, and owner
  * @name: name of dog
  * @age: age of dog
  * @owner: owners name
  *
  * Description: Struct includes name of dog, age, name of owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif