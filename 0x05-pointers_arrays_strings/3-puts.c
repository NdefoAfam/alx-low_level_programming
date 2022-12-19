#include "main"

/**
 * _puts - prints a string
 * @str: This is my input string
 *
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
{
	_putchar(str[index]);
}
_putchar('\n');
}
