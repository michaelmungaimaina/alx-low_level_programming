#include "main.h"
/**
 * _isdigit - checks for digits (0 through 9)
 * @c: integer input
 * Return: 1 if digit, 0 ow
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
