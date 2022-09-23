#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the
 * terminating null byte, to the end of the string pointed to by @dest.
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string @dest
 */

char *strcat(char *dest, const char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
