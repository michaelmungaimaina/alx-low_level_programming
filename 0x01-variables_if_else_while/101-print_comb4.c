#include <stdio.h>
/**
 * main - start of program execution
 * Description: Prints all possible combinations of 3 digits
 * Numbders are seperated by commas and space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the sme combination
 * Prints only the smallest combination of 3 digits
 * Numbers are printed in ascending order
 * use putchar to print up to 6 times only
 * No var of type char
 */
int main(void)
{
	int k, j, l, i;
	
	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* ones */

		/* Check if the digits are in ascending order and different */
		if (j < k && k < l)
		{
			putchar(j + '0'); /* Print hundreds digit */
			putchar(k + '0'); /* Print tens digit */
			putchar(l + '0'); /* Print singles digit */

			/* Add a comma and a space if it's not the last combination */
			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
