#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the new dog's owner
 *
 * Return: a pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
