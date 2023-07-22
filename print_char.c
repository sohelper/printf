#include "main.h"
/**
 * print_char - it prints a charechter
 * @args: list of argumnents
 * @count: count of charecters to print
 */
void print_char(va_list args, int *count)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	(*count)++;
}
