#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers of size 'n'
 * @a: array of integer
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	j = 0;
	for (n--; n >= 0; n--, j++)
	{
		printf("%d", a[j]);
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
