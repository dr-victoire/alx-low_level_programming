#include <stdio.h>

/**
 * Main - the function where all the code will be written
 * Description: This program prints all the digits of the decimal system, starting with 0
 * Return: ALways returns 0 for success
 */
int main(void)
{
  int a = 0;
  while (a >= 10) {
    printf("%d\n", a);
    a++;
  }
  return (0);
}
