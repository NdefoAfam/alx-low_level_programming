#include <stdio.h>
/**
 * main - prints lower case alpha in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchchar ('\n');

	return (0);
}
