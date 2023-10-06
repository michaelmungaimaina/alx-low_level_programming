#include <stdio.h>
/**
 * main - start of program execution
 * Description: Prints all possible combinations of 2 2-digit numbers
 * Range is between 0 to 99
 * The 2 numbers should be seperated by a space
 * Cobination shld be printed in ascending order
 * All numbers should be printed with two digits. 1 = 01
 * '00 01' and '01 00' are considered the same combination
 * Use putchar to ouput up to 8 times only
 * No var of type char is allowed
 * Return: 0
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* doubles fnum */
		b = i % 10; /* singles fnum */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* doubles snum */
			d = j % 10; /* singles snum */
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
