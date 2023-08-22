#include "main.h"

/**
 * print_char - writes the character c to stdout
 * @lst: The character to print
 *
 * Return: void
 */

void print_char(va_list lst)
{
int ch;

ch = va_arg(lst, int);
_putchar(ch);

}


/**
 * print_str - writes the character c to stdout
 * @lst: The character to print
 *
 * Return: void
 */

void print_str(va_list lst)
{
char *str;
int k = 0;

str = va_arg(lst, char*);
while (str[k] != '\0')
{
_putchar(str[k]);
k++;
}
}

/**
 * print_percent - writes the character c to stdout
 * @lst: The character to print
 *
 * Return: void
 */

void print_percent(va_list lst)
{
_putchar('%');
}
