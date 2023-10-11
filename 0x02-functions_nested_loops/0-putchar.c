#include "main.h"
/**
 * main - begin of program execution
 * Description: Prints '_putchar' followed
 * by a new line
 * Return: 0
 */
int main(void)
{
	char outPut[] = "_putchar";
	int i = 0;

	while (outPut[i] != '\0')
	{
		_putchar(outPut[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
