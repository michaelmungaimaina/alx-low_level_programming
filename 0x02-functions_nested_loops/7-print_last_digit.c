#include "main.h"
/**
 * print_last_digit - main prototype
 * Description: Prints the last digit of input
 * @n: integer input
 * Return: last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = n % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
