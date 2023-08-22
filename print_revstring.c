#include "main.h"
/**
 *print_revstring - Function
 *@lst: input
 *
 *Return: Non
 */
void print_revstring(va_list lst)
{
	char *c = va_arg(lst, char*);
	int i = 0;

	i = _strlen(c);
	i--;

	while (i >= 0)
	{
		_putchar (c[i]);
		i--;
	}
}
