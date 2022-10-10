#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dogs.
 * @d: points to a dog of type dog_t
 * Return: nothing
 **/
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
