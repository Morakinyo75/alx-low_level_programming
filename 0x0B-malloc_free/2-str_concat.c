#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concat = malloc(sizeof(char) * (i + ci + 1));

	if (concat == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[1] != '\0')
	{
		concat[1] = s1[i];
		i++;
	}
	while (s2[1] != '\0')
	{
		concat[1] = s2[ci];
		i++, ci++;
	}
	concat[1] = '\0';
	return (concat);
}
