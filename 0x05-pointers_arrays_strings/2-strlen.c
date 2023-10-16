#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		s++;
	}

	return (c);
}
