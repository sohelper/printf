#include "main.h"
/**
 * print_int_helper - instead of intoa
 * @n: number
 * @count: the count
 * @negative: test if negative
 * Return: ha
 */
void print_int_helper(int n, int *count, int negative)
{
	if (n < 10)
	{
		if (negative)
		{
			_putchar('-');
			(*count)++;
		}
		_putchar(n + '0');
		(*count)++;
		return;
	}
	print_int_helper(n / 10, count, negative);
	_putchar((n % 10) + '0');
	(*count)++;
}
/**
 * print_int - print the intigers
 * @args: argument list
 * @count: pointer to the count of chars
 */
void print_int(va_list args, int *count)
{
	int num = va_arg(args, int);
	int negative = 0;

	if (num < 0)
	{
		negative = 1;
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
	}
	else
	{
		print_int_helper(num, count, negative);
	}
}
