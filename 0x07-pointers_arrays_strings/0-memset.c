#include "main.h"
 /**
  * _memset - fill memory with a constant byte
  * @n: bytes of the memory area to be filled
  * @s: memory area to fill
  * @b: constant byt to fill
  *
  * Return: memory are filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
