#include "main.h"
/**
 * print_square - Prints square followed by a new line
 * Description: use _putchar to print
 * @n: size of square
 * Return: void
 */
void print_square(int n)
{
	int x, y;

	y = 0;

	if (n < 1)
		_putchar('\n');

	while (y < n)
	{
		x = 0;
		while (x < n)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
