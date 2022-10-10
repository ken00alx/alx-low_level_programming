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
	if (d == 0)
		return;
	if (d->name == 0)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nill)");
	else
		printf("Owner: %s\n", d->);
}
