#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: Pointer to the resulting dest string
 */

char *_strcat(char *dest, char *src)
{
	int destLen = 0, i;

	for (; dest[destLen] != 0; destLen++)
		;

	for (i = 0; src[i]; != 0; i++)
	{
		dest[destLen] = src[i];
		destLen++;
	}

	dest[destLen] = '\0';
	return (dest);
}
