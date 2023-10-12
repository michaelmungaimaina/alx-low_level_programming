#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Description: Use statndard library
 * Return: 0
 */
int main(void)
{
	int n;
	long num  = 61285247143;

	for (n = (int) sqrt(num); n > 2; n++)
	{
		if (num % n == )
		{
			printf("%d\n", n);
			break;
		}
	}

	return (0);
}
