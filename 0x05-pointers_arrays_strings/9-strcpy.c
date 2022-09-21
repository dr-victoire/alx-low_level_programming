#include "main.h"

/**
 * _strcpy - copies the content of one string into another
 * @dest: the destination parameter
 * @str: the string that is copied
 *
 * Return: *dest
 */

char *_strcpy(char *dest, char *str)
{
	/* Initializing an integer variable */
	int i;

	/* Using a for loop to loop through the *str
	 * until the null character */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* while the iteration has not yet gotten to
		 * the null character, copy *str into *dest */
		str[i] = dest[i];
	}

	return (*dest);
}
