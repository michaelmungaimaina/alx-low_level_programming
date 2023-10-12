#include <stdio.h>
/**
 * main - prints the fizz buzz program
 * Description: For multiples of 5 print 'Buzz', 3 print 'Fizz'
 * and both print 'FizBuzz'
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3  == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
