#include "main.h"
/**
*_printf - Function
*@format: input
*
*Return: int
*/
int _printf(const char *format, ...)
{
	int i;
	int  len = 0;

	/*length of string returned by printf function*/
	len = _strlen(format);

	va_list lst;

	va_start(lst, format);

	/*print String*/
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
		}
		else
		{
			++i;
			select_to_print (format, &i, lst);
		}
	}
	va_end(lst);

	return (len);
}
