#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct describing the information of a dog
 * @name:name of the dog
 * @age:age of the dog
 * @owner:member name of owner
 *
 * Description: This holds the information about the dog name owner and age.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
