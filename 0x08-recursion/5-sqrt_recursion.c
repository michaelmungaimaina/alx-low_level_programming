#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - helper func to calculates natural square root
 * @n: number to calculate the square root
 * @i: iteration number
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square == n)
		return (i);

	if (square < n)
		return (_sqrt(n, i + 1));

	return (-1);
}
