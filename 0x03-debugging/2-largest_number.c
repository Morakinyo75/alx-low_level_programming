#include <main.h>

/** largest number - returns the large 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: thrid integer
 * Return: largest number
 */

int largest_number(int a, imt b, int c)
{
	int largest;
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest)
}
