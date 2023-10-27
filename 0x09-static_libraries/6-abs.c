#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * Description: Computes the absolute val
 * @n: integer input
 * Return: absolut val of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
