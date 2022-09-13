#include "main.h"

/**
 * print_alphabet - prints the english alphabet.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);

		i++;
	}

	_putchar('\n');
}
