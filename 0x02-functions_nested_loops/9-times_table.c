#include "main.h"
/**
 *times_table - print the 9 times table
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = l; mult <= 9; mult++)
		{
		_putchar(',');
		_putchar(' ');

		prod = num * multi;

		if (prod <= 9)
			-putchar(' ');
		else
			_putchar((prod / 10) + '0');
		_putchar((prod / 10) + '0');
		}
		_putchar('\n');
		}
	}
}
