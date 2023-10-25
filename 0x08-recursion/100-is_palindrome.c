#include "main.h"

int _palindrome(char *s);
int _strlen(char *s);

/**
 * is_palindrome - Returns if a string is palindrome
 * @s: the string value to be checked
 *
 * Return: integer value
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (_palindrome(s));
}

/**
 * _palindrome - Check if a string is palindrome
 * @s: the string value to be checked
 *
 * Return: integer value
 */
int _palindrome(char *s)
{
	int l = _strlen(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
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

	s++;
	return (_strlen(s) + 1);
}
