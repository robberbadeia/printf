#include "main.h"
/**
 *print_intNumber - Function
 *@lst: input
 *
 *Return: non
 */
int print_intNumber(va_list lst)
{
	int n;
	unsigned int m, d, count;
	int c = 0;

	n = va_arg(lst, int);

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
		c++;
	}

	return (c);
}
