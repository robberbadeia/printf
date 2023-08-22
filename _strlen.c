#include "main.h"
/**
 *_strlen - Function
 *@c: input
 *
 *Return: int
 */
int _strlen(char *c)
{
	int i, f = 0;

	while (c[i] != '\0')
	{
		if (c[i] == '%' && c[i++] == '%')
			f++;
		i++;
	}
	if (f == 1)
		return (i - 1);
	else
		return (i);
}
