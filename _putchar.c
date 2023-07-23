#include "main.h"

/**
 * _putchar - it print each char
 * @c: charecter to print
 * Return: the cprinted char
 */
int _putchar(char c)
{
	static int buffer_counter;
	static char buffer[1024];

	if (c == -1)
	{
		buffer_counter = 0;
		return (0);
	}
	if (c == -2 || buffer_counter == 1024)
	{
		write(1, buffer, buffer_counter);
		buffer_counter = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[buffer_counter] = c;
		buffer_counter++;
		return (1);
	}
	return (0);
}
