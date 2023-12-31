#include "main.h"
/**
 * _isalpha - main prototype
 * Description: checks if character is an alphabetic char
 * @c: type int character
 * Return: 1 if alphabet(lower or uppercase), and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
