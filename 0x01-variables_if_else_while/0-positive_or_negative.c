#include <stdlib.h>
#include <time,h>
#include <stdio.h>

/**
 * main - Random number assigned to the variable n.
 * print whether the number store in variable n is positive or negative.
 * Return: 0 if no errors, return non zero if errors.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
