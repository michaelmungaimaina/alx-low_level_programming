#include "main.h"
/**
 * print_alphabet_x10 - main prototype
 * Description: print alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char myChar;

	while (i < 10)
	{
		myChar = 'a';
		while (myChar <= 'z')
		{
			_putchar(myChar);
			myChar++;
		}
		_putchar('\n');
		i++;
	}
}
