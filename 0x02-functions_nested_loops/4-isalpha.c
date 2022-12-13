#include "main.h"

/**
 *main - checks for char alphabet
 * @c: the char is to be checked
 * Return: 1 if char is letter lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
