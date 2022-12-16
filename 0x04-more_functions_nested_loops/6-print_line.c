#include "main.h"
/**
* print_line - prints a line
*@n: integer params
*/

void print_line(int n)

{
	int i;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i <= n; i++);
		_putchar('_');
	_putchar('\n');
}
