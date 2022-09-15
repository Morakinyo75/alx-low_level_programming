#include <main.h>

/**
 * largest_number - returns the largest of the 3 numbers
 * @a: first integer
 * @c: second integer
 * @e: third integer
 * Return: largest
 */

int largest_number(int a, int c, int e)
{
	int largest;

	if (a >= c && a >= e)
	{
		largest = a;
	}
	else if (c >= a && c >= e)
	{
		largest = c;
	}
	else
	{
		largest = e;
	}
	return (largest);
}
