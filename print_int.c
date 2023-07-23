#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_int - prints integer
 * @args: list of arguments
 * @count: pointer to the count of chars
 * Return: void
 */
void print_int(va_list args, int *count)
{
	int n = va_arg(args, int);
	int digit;
	int length = 0;
	int num = n;
	int pow = 1;
	int i;

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		(*count)++;
	}
	while (num != 0)
	{
		num /= 10;
		length++;
	}
	for (i = 1; i <= length - 1; i++)
		pow *= 10;
	for (i = 1; i <= length; i++)
	{
		digit = n / pow;
		if (n < 0)
		{
			_putchar((digit * -1) + '0');
		}
		else
			_putchar(digit + '0');
		(*count)++;
		n -= digit * pow;
		pow /= 10;
	}
}
