#include <unistd.h>

/**
 * _putchar - prints char to.stdout
 * @c: the char
 *
 * Return: 1 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
