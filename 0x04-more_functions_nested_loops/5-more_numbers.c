#include "main.h"
/**
 * more_numbers - Prints 10 times the number between 0 to 14
 * Description: Use _putchar 3 times only
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	
	 i = 0;
	 while (i < 10)
	 {
		 j = 0;
		 while (j < 15)
		 {
			 if (j > 9)
				 _putchar(j / 10 + '0');

			 _putchar(j % 10 + '0');
			 j++;
		 }
		 i++;
		 _putchar('\n');
	 }
}
