#include <stdio.h>
#include "function_pointers.h"

int is_98(int elem)
{
	return (98 == elem);
}

int main(void)
{
	int array[5] = {0, -98, 98, 402, 4096};
	int index;

	index = int_index(array, 20, is_98);
	printf("%d\n", index);
	return (0);
}
