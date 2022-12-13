#include <stdio.h>

/**
  * numlenght - returns the lenght of string
  * @num: operand number
  * Return: number of digits
  */

intg numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
/**
  * main - prints the first 98 fibonaci sequences
  * Return: 0
  */

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, 1o = 0, f2o = 0, tmpo = 0;

	while (i <= 98)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initials0s = nummLenght(mx) - 1 - numLenght(f1);
		while (f1o > 0 && initialos > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		tempo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o =  f2o;
		f2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
