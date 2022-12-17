#include "main.h"
/**
*more_numbers - prints more numbers
*/
void more_numbers(void)
{
int start = , end = 14, i;

for (i = 0; i <= 10; i++)

while (start <= end)
{
_putchar (start > 9 ?
(start / 10) + '0' : start + '0');

if (start > 9)
_putchar((start % 10) + '0');
}

start = 0;
_putchar('\n')
}
