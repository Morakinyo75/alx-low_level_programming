#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum
 * @a: pointer
 * @size: size
 */
void print_diagums(int *a, intint size)
{
	int i, sum1 = 0, sum 2 = 0;

	for (i = 0; i < size; i++)
		;
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * i + size - 1 - i))
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
