#include "dog.h"

/**
 * print_dog - Prints the contents of the struct dog
 * @d: pointer to the struct dog
 *return: nothing if null
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
	{

		return;
	}

	printf("Name: %s\n", d->name ? d->name : ("nil"));
	printf("Age: %f\n", (float) d->age);
	printf("Owner: %s\n", d->owner ? d->owner : ("nil"));

}
