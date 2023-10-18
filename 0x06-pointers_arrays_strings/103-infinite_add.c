#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: first integer
 * @n2: second integer
 * @r: the buffer the func will use to store the result
 * @size_r: buffer size
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	int carry = 0;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while(i >= 0 || j >= 0 || carry)
	{
		int num1 = (i >+ 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = sum / 10;
		r[k] = (sum % 10) + '0';

		k++;
		i--;
		j--;
	}

	r[k] = '\0';

	for (int start = 0, end = k - 1; start < end; start++, end--)
	{
		char temp = r[start];
		r[start] = r[end];
		r[end] = temp;
	}

	return (r);
}
