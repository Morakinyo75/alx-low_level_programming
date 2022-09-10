#include <stdio.h>
/**
 * main - Prints the alphabet at reverse
 * Description: using the main function
 * this code prints "Programme is postive, zero or negative
 * Return: Always (Success)
 */
int main(void)
{
    char c;

    for (c = 'z'; c >= 'a'; c--)
    {
            putchar(c);
    }

	putchar('\n');

	return (0);
}
