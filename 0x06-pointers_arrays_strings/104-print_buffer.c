#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of size bytes of tthe buffer pointed by b
 * @b: pointer
 * @size: bytes
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		int j;

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", (unsigned char)b[j]);
			else
				printf("  ");

			if (j % 2 == 1)
				printf(" ");
		}

		printf(" ");

		int m;

		for (m = i; m < i + 10; m++)
		{
			if (m < size)
			{
				if (isprint(b[m]))
				{
					printf("%c", b[m]);
				}
				else
				{
					printf(".");
				}
			}
		}

		printf("\n");
	}
}
