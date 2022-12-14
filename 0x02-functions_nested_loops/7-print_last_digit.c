#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit (int n)

	if (num < 0)
	{
		res = -1 * (num % 10);
		_putchar(res + '0');
		return (res);
	}
	else
	{
		res = num % 10;
		_putchar(res + '0');
		return (res);
	}
