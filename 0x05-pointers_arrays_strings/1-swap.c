#include "main.h"
/**
* swap_int - given two integers swap the values they are holding
* @a: integer to swap
* @b: integer to swap
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
