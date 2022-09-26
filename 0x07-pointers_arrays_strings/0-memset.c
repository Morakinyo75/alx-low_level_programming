#include "main.h"
 /**
  * _memset - fill a memory block with a constant byte
  * @s: address to memory block
  * @b: char to be used
  * @n: number of byte to be used
  *
  * Return: pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - i] = b;
		n--;
	}
	return (s);
}
