#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  more headers goes there
 * Declearatioin: positive or nevative print
 *
 */
/* betty style doc for function main goes there*/
 

int main(void)
	/* your code goes there */

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else if (n < 0)

	{
		printf("%d is negative\n", n);
	}

return (0);
}
