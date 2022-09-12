#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 if any errors, return non zero if no errors
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)

		putchar(letter);

	putchar('\n');

	return (0);
}
