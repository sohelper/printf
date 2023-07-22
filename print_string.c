#include "main.h"
/**
 * print_string - print a string
 * @args: argument list
 * @count: count of charecter printed
 */
void print_string(va_list args, int *count)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (; *str; str++)
	{
		_putchar(*str);
		(*count)++;
	}
}
