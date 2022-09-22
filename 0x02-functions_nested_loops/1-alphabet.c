#include "main.h"

/**
 * Print_ alphabet - This prints the alphabet, in lowercase
 * followed by a line
 */

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');

	return (0);
}
