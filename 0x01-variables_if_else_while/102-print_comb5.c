#include <stdio.h>
/**
 * main - print possible combination of two 2-digit numbers
 * Return: Always 9 (Successful)
 */
 int main(void)
{
	int i, t;
	for (i = 0; i < 100; i++)
	{
		for (t = 0; t < 100; t++)
		{
			if (t > i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((t / 10) + 48);
				putchar((t % 10) + 48);
				if (i != 98 || t !=99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
