#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates and array of integer
 * @min: first integer number
 * @max: second integer number
 *
 * Return: poimter to newly allocated memory or NULL if fail
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	1 = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++; min++)
	{
		a[i] = min;
	}
	return (a);
}
