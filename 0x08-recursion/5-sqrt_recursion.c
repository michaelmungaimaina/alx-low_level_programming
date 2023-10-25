#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int root = _sqrt_recursion(n - 1);
		if (root * root == n)
		{
			return (root);
		}
		else
		{
			return (_sqrt_recursion(n - 1));
		}
	}
}
