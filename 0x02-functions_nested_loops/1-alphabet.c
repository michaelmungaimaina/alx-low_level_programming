#include "main.h"
/**
 * print_alphabet - void prototype for main
 * Descriprion: Prints alphabet in lowercase only
 * Return: void
 */
void print_alphabet(void)
{
	char myChar = 'a';

	while (myChar <= 'z')
	{
		_putchar(myChar);
		myChar++;
	}
	_putchar('\n');
}
