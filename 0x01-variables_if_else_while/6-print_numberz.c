#include <stdio.h>
/**
 * main - start of program execution
 * Description: Prints all base 10 numbers, starting from 0.
 * No var type char
 * Only use puchar twice
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
	}
	putchar('\n');

	return (0);
}
