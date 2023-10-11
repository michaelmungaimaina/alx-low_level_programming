#include "main.h"
/**
 * times_table - main prototype
 * Description: Prints the 9 times table
 */
void times_table(void)
{
	int x = 0; /* factor value */
	int y; /* count value */
	int z; /* computed value */

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;

			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;

		}
		_putchar('\n');
		x++;
	}
}
