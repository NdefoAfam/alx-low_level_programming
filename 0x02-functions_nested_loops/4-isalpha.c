#include "main.h"

/**
 *main - check for alphabet
 * @c: ichararacter to be checked
 * Return: 1 if chararacter is letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
