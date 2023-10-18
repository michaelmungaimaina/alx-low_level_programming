#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int j = 0; /** tracker of current char **/
	int i; /** loop counter **/
	char trigChar[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[j])
	{
		for (i = 0; trigChar[i] != '\0'; i++)
		{
			if ((j == 0 || str[j - 1] == trigChar[i]) && (str[j] >= 97 && str[j] <= 122))
				s[j] -= 32;
		}
		
		j++;
	}

	return (str);
}
