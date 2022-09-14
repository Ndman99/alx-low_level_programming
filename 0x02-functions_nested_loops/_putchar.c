#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: Always 0
 * on error, -1 is required, and err no is set appropriately'
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}
