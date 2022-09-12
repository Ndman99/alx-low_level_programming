#include <stdio.h>

/**
 * main - This program prints the sizes of the various types on the computer
 * Return: return zero
 */

int main(void)

{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %i byte(s)\n", (unsigned long) sizeof(char));
	printf("Size of an int: %i byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %i byte(s)\n", (unsigned long) sizeof(long int));
	printf("SIze of a long long int: %i byte(s)\n", (unsigned long) sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", (unsigned long) sizeof(float));

	return (0);
}
