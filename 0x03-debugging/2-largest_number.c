#include "main.h"

/**
 * largest_number - a func to print the largest number from 3 inputs
 * @a: first integer input
 * @b: second integer input
 * @c: third integer input
 * Return: Largest integer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	if (b >= a && b >= c)
	{
		largest = b;
	}
	if (c >= b && c >= a)
	{
		largest = c;
	}

	return (largest);
}
