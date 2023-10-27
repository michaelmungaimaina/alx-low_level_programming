#include "main.h"
/**
 * _islower - main func prototype
 * Description: Checks whether a char is lowercase
 * @c: char type letter
 * Return: 1 if lowercase, 0 ow
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
