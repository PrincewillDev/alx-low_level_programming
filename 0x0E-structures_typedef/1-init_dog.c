#include "dog.h"

/**
 * init_dog - This function initialize a variable of type struct dog
 * @d: the object or variable of type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
