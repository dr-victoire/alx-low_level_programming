#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: the character to print
 *
 * Return: 1 on success.
 * -1 on error and the error is set appropraitely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
