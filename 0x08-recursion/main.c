#include <stdio.h>
#include "main.h"

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	int r;

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(17);
	printf("%d\n", r);
	r = is_prime_number(32);
	printf("%d\n", r);
	r = is_prime_number(144);
	printf("%d\n", r);
	r = is_prime_number(31);
	printf("%d\n", r);

	return (0);
}
