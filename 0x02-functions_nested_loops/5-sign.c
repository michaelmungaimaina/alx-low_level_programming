#include "main.h"
/**
 * print_sign - main fun prototype
 * Description: Prints the sign of a number
 * @n: input number
 * Return: 1 and prints '+' if n is > 0
 * 0 and prints '0' if n = 0
 * -1 and prints '-' if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
