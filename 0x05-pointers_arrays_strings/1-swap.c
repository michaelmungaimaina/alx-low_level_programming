#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: first integer value
 * @b: second integer value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
