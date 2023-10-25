#include "main.h"

int findsqrt(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - finds square root
 * @n: number to find square root
 * @guess: number of guesses
 *
 * Return: square root
 */
int find_sqrt(int n, int guess)
{
	int root = guess * guess;
	if (root == n)
		return (guess);

	if (root > n) 
		return (-1);
	
	return (find_sqrt(n, guess + 1));
}
