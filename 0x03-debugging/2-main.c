#include <stdio.h>
#include "main.h"
/**
 * main - calls the func largest_number(int a, int b, int c)
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 978;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
