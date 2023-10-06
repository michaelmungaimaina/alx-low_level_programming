#include <stdio.h>
/**
 * main - start of program execution
 * Description: Prints all posible combinations of a single digit number
 * Numbers are seperated by commas and space
 * Use only puchar as IO stream
 * Use putchar 4 times only
 * No var of type char
 * Return: 0
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar(b + '0');
		if (b < 9)
		{
			putchar(44);
			putchar(32);
		}
		b++;
	}
	putchar('\n');

	return (0);
}
