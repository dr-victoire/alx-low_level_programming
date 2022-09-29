#include "main.h"

int is_prime_number(int n);
int check_for_prime(int n, int i);

/**
 * is_prime_number - checkswhether or not an integer is prime
 * @n: the integer argument
 *
 * Return: 1 if integer is prime and 0 if it's not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (check_for_prime(n, 2));
	}
}

/**
 * check_for_prime - checks whether or not an integer is prime
 * @n: the integer
 * @i: the modulator to check
 *
 * Return: 0 if not prime or 1 if prime
 */

int check_for_prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if ((n % i) == 0)
	{
		return (0);
	}
	else
	{
		return (check_for_prime(n, ++i));
	}
}
