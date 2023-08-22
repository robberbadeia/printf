#include "main.h"
/**
 *_strlen - Function
 *@c: input
 *
 *Return: int
 */
int _strlen(const char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}

	return (i);
}
