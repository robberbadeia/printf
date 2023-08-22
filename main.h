#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @key: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @func: type pointer to function for the conversion specifier
 *
 */
struct format
{
	char key;
	int (*func)(va_list);
} st;


int  select_to_print(const char *fmt, int *index, va_list lst);
int _printf(const char *format, ...);
int _strlen(const char *c);
int _putchar(char c);
int print_intNumber(va_list lst);
int print_rot13(va_list lst);
int print_revstring(va_list lst);
int print_char(va_list lst);
int print_str(va_list lst);
int print_percent(va_list lst);


#endif

