#include "main.h"

/**
 * _strncat - Concatenates two strings with a limit
 * @dest: destination string
 * @src: source string
 * @n: limit of concatenation
 *
 * Return: A pointer to the resulting dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen = 0; i = 0;

	for (; dest[destLen] != '\0'; destLen++)
		;

	for (; i < n && src[i] != '\0'; i++, destLen++)
		dest[destLen] = src[i];
	dest[destLen] = '\0';

	return (dest);
}
