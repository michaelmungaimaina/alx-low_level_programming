#include "main.h"

int _palindrome(char *s, int l);
int _strlen(char *s);

/**
 * is_palindrome - Returns if a string is palindrome
 * @s: the string value to be checked
 *
 * Return: integer value
 */
int is_palindrome(char *s)
{
	int length;
	
	if (*s == '\0')
		return (1);

	length = _strlen(s) - 1;

	return (_palindrome(s, --length));
}

/**
 * _palindrome - Check if a string is palindrome
 * @s: the string value to be checked
 * @l: string length
 *
 * Return: integer value
 */
int _palindrome(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (_palindrome(++s, l - 2));
	}
	else
		return (0);
}

/**
 * _strlen - Get the length of a string
 * @s: the string to get the length
 *
 * Return: the string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen(s + 1) + 1);
}
