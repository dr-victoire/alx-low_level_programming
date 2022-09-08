#include <stdio.h>

/**
 * main - the body of the code
 *
 * Return: 0
 */
int main(void)
{
 char char_type;
 int int_type;
 long int long_int_type;
 long long int long_long_int_type;
 float float_type;

 printf("Size of a char: %zu bytes\n", sizeof(char_type));
 printf("Size of an int: %zu bytes\n", sizeof(int_type));
 printf("Size of a long int: %zu bytes\n", sizeof(long_int_type));
 printf("Size of a long long int: %zu bytes", sizeof(long_long_int_type));
 printf("Size of a float: %zu bytes", sizeof(float_type));

 return (0);
}
