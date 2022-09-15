#include <stdio.h>
#include <main.h>

/** primt_number - Prints a number
 * @n: the number to print
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar ('-');
		num = -num;
	}
	if (n > 9)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0')
}
