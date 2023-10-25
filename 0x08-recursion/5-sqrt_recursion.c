#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	int halp(int c, int i)
	{
		int square;

		square = i * i;
		if (square == c)
			return (i);
		else if (square < c)
			return (halp(c, i + 1));
		else
			return (-1);
	}

	return (halp(n, 1));
}
