#include <stdio.h>
/**
 * main - program execution starts here
 * Description: prints alphabets in lowercase using 'putchar'
 * Return: 0
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
