#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents a dog with a name, age, and owner
 * @name: the name of the dog
 * @age: the age of the dog in years
 * @owner: the name of the dog's owner
 *
 * Description: This struct represents a dog with a name, age, and owner.
 * It is used to store information about a dog in a program.
 */

struct dog
{

	char *name; /* the name of the dog  */
	float age;  /* the age of the dog in years  */
	char *owner; /* the name of the dog's owner  */
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
