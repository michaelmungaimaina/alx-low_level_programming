#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Description: Use statndard library
 * Return: 0
 */
int main(void)
{
	long n;
	long num  = 61285247143;

	for (n = 2; n <= sqrt(num); n++)
	{
		while (num % n == 0)
		{
			num /= n;
		}
	}

	if (num > 1)
	{
		printf("%d\n", num);
	}
	/**

	for (n = (int) sqrt(num); n > 2; n++)
	{
		if (num % n == 0)
		{
			printf("%d\n", n);
			break;
		}
	}
	**/

	return (0);
}
