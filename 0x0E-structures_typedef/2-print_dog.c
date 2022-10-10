#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a dog
 * @d: the dog to be printed
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == NULL)
			print("Age: (nil)\n");
		else
			printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
