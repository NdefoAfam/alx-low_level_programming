#include "main.h"
/**
  * _islower - check if a letter
  is lower case
  * @c: is the letter to be checked
  * Return: 1 if letter is
  lower case, 0 if not.
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
