#include <stdio.h>
/**
 * main - start of program execution
 * Description: Prints all possible different combinations of two digits.
 * Numbers are seperated by commas and space
 * Prints only the smallest combination
 * Printed in ascending order
 * 01 and 10 are considered the same combination
 * Use only putchar up to 5 times
 * No var of type char
 */
int main(void)
{
	int i, j, k;
	
	i = 0;

	while (i < 100)
	{
		j = i % 10; /* singles digit */
		k = i / 10; /* doubles digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');
			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}
