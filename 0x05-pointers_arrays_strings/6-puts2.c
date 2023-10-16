#include "main.h"
/**
 * puts2 - prints one character of two of a string
 * @str: input string
 * Description: Prints chars; 1st, 3rd, 5th ...
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
