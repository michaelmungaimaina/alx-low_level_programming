#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - begin of program execution
 * Description: Prints the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int i  = 1, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;

		i++;
	}
	printf("%d\n", sum);

	return (0);
}
