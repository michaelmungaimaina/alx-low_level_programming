#include <stdio.h>
/**
 * main - start of program execution
 * Description: Prints all alphabets using 'putchar' except 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		if (b != 'q' && b != 'e')
			putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
