#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: 0 if no errors, return non zero if errors.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);

	putchar('\n');

	return (0);
}


