#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int c;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
