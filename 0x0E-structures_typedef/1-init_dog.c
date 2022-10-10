#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the variable dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = {d.name, d.age, d.owner};
}
