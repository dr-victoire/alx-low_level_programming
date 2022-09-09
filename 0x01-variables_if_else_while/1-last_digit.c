#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the place where all the code stays
 * Description:  prints the last number with conditions
 * Return: 0 
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 5)
    printf("Last digit of %d is and is greater than 5\n", n);
  else if (n == 0)
    printf("Last digit of %d is and is zero\n", n);
  else 
    printf("Last digit of %d is and is less than 5\n", n);
  return (0);
}
