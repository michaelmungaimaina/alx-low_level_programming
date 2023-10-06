#include <stdio.h>
/**
 * main - begin of program execution
 * Description: Prints lowercase and then uppercase alphabet using 'putchar'
 * Return: 0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}

	/* Reassgn char b to uppercase */
	b = 'A';

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');

	return (0);
}
