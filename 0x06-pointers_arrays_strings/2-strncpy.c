#include "main.h"

/**
 * _strncpy - Copies a string with limit
 * @dest: destination string
 * @src: source string
 * @n: character limit to be copied
 * Return: edited string
 */

char *strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	
	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}	