#include <stdio.h>
/**
 * main - start of program execution
 * Description: prits all base 16 numbers in lowercase
 * Use putchar only, and three time only
 * Return: 0
 */
int main(void)
{
	char a;
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
	}
	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
