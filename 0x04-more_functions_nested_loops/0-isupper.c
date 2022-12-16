#include "main.h"
/**
 * _isupper - ckecks if uppercase
 * @c: input character
 * Return: 1 if is an uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= '65' && c <= '90i')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
