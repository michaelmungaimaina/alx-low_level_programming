#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by a pointer 'src' to
 * the buffer pointed to by 'dest'
 * @dest: Destination file
 * @src: Source file
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
