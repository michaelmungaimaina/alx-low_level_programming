#include "main.h"
/**
 * print_line - Prints a straight line in the terminal
 * Description: Use _putchar
 * @n: number of times the char '_' should be printed
 * Return: void
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
