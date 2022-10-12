#include "stdlib.h"
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: points to char.
 * @f: points to function that returns nothing
 * Return: value to nothing
 */

void print_name(char *name, void(*f)(char *))


{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
	
}
