#include "main.h"
/**
 *print_rot13 - encodes a string in rot13
 * @lst: string to be encoded
 *
 * Return: Non
 */
int print_rot13(va_list lst)
{
	int i, j;
	int x = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s = va_arg(lst, char*);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				x++;
			}
		}
	}

	return (x);

}
