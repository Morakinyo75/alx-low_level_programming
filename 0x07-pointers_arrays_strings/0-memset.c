#include "main.h"
 /**
  * _memset - fill the memory with a constant byte
  * @n: index
  * @s: pointers to char
  * @b: data to be replaced
  * Return: *s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
