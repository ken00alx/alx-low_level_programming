#include <stdio.h>
/**
 * main - print combination of digits 
 *
 * Return: 0 success
 */

	int main(void)
{
	for (num = 0; num <= 9; num++)
{
	putchar((num % 10) + '0');
	if (num == 9)
		continue;
	putchar (',');
	putchar (' ');
}
putchar(" \n");

return (0);
}
