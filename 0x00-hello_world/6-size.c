#include <stdio.h>

/**
 * main - This program prints the sizes of the various types on the computer
 * Return: return zero
 */

int main(void)

{
	int a = 1;
	int b = 4;
	int c = 8;

	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", b);
	printf("SIze of a long long int: %d byte(s)\n", c);
	printf("Size of a float: %d byte(s)\n", b);

	return (0);
}
