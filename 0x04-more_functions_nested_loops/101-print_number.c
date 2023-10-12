#include "main.h"
#define NUM 1000000000
/**
 * print_number - prints an integer
 * Description: Use _putchar to print, do not use long
 * @n: integer input
 * Return: void
 */
void print_number(int n)
{
	NUM m; /* large number */
	int c; /* boolean check */
	long num; /* convert int to long */

	num  = n;
	/* negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* count up */
	m = 1;
	c = 1;
	while (c)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}

	/* count down */
	while (num >= 1)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /=10;
		}
	}
}
