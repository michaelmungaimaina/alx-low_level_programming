#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: the char to output
 * Return: 1 on success, 0 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
