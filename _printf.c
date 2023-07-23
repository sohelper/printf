#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - ac lone to the built in printf
 * @format: format string
 * Return: number of charecters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	const char *t;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	t = format;

	while (*t != '\0')
	{
		while (*t != '%' && *t != '\0')
		{
			_putchar(*t);
			t++;
			count++;
		}
		if (*t == '\0')
			break;
		t++;
		if (*t == 'c')
			print_char(args, &count);
		else if (*t == 's')
			print_string(args, &count);
		else if (*t == '%')
			print_percent(&count);
		else if (*t == 'd' || *t == 'i')
			print_int(args, &count);
		else
		{
			_putchar('%');
			_putchar(*t);
			count += 2;
		}
		t++;
	}
	va_end(args);
	return (count);
}
