#include <stdio.h>

/**
 * Main - the function where all the code will be written
 * Description: This program prints all the digits of the decimal system, starting with 0
 */
int main(void)
{
  int a = 0;
  while (a >= 10) {
    printf("%d\n", a);
    a++;
  }
}
