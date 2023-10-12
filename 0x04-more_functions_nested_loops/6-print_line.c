#include "main.h"
/**
 * print_line - Prints a straight line in the terminal
 * Description: Use _putchar
 * @n: number of times the char '_' should be printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	while (n > 0)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}
