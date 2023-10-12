#include "main.h"
/**
 * _isupper - checks for uppercase chars
 * @c: integer input
 * Return: 1 if uppercase, 0 ow
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
