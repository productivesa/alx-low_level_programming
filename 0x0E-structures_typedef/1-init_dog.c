#include "dog.h"
/**
 * init_dog - initializes a dog
 * @d: a dog structure
 * @name: the name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Always 0 for Sucess
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
