#include "dog.h"
#include <stdio.h>
#include <stdio.h>

/**
 * print_dog - printer to a struct dog
 * @d: points to the element of type dog
 * Return: value to NULL
 */

void print_dog(struct dog *d)


{
	if (d == NULL)
		;
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nill)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nill)\n");
	}
}
