#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to be allocated
 * Return: pointer to allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(c);
	if (p == NULL)
		exit(98);
	return (p);
}
