#include "main.h"

/**
 * print_alphabet_x10 - print the english alphabet 10x
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int whole, single;

	whole = 0;
	while (whole < 10)
	{
		single = 97;
		while (single <= 122)
		{
			_putchar(single);

			single++;
		}

		_putchar('\n');

		whole++;
	}
}
