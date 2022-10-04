#include "main.h"

/**
 * _strdup - returns a pointer to a newly alllocated
 * space in memory, which contain a copy of the
 * string given as a parameter
 * @str: string to be copied
 *
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{

	char *cpy;
	int index, len;
	
	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	for (index - 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';
	return (cpy);
}
