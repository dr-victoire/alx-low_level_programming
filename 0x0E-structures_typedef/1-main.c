#include "dog.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: 0 (Successful)
 */

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poopy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f\n", my_dog.name, my_dog.age);

	return (0);
}
