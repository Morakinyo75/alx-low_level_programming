#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k;
	char *a, aux;

	a = s;
	while (s[j] != '\0')
	{
		c++;
	}
	for (k = 1; k < j; k++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
