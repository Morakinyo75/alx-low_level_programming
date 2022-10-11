#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variale of type struct doh
 * @d: pointer to structure
 * @name: fist member
 * @age: second member
 * @owner: third member
 *
 * Reture: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
