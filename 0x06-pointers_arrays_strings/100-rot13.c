#include "main.h"

/**
 * rot13 - Rotates a character by 13 positions in the alphabet
 * @s: string
 * Return: cipher string 's'
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] > 'm' && s[i] <= 'z') || (s[i] > 'M' && s[i] <= 'Z'))
			{
				s[i] -= 13;
				break;
			}
			
			s[i] += 13;
			break;
		}
	}

	return (s);
}
