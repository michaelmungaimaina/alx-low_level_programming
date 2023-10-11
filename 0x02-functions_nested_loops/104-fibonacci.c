#include <stdio.h>
#define LONG 10000000000
/**
 * main - start of program execution
 * Description: Print the first 98 Fibonacci numbers starting with 1 and 2
 * Numbers should be comma and space seperated.
 * Return: 0
 */
int main(void)
{
	unsigned long int first = 0, bk1 = 1, sec = 0, bk2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LONG || sec > 0 || first > 0)
		{
			hold1 = (bk1 + bk2) / LONG;
			hold2 = (bk1 + bk2) % LONG;
			hold3 = first + sec + hold1;
			first = sec;
			sec = hold3;
			bk1 = bk2;
			bk2 = hold2;
			printf("%lu%010lu", sec, bk2);
		}
		else
		{
			hold2 = bk1 + bk2;
			bk1 = bk2;
			bk2 = hold2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
