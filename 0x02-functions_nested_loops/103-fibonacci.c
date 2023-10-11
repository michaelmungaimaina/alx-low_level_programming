#include "main.h"
#include <stdio.h>
/**
 * main - start of program execution
 * Description: Prints the sum of even Fibonacci sequence not exceeding 4 mil
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, sum = 0;
	int k;
	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", sum);
	return (0);
}
