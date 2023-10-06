#include <stdio.h>
/**
 * main - start of program execution
 * Description: Prints lowercase alphabets in reverse order
 * Use only putchar and use it twice
 * Return: 0
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
