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
	va_list lst;

	/*length of string returned by printf function*/
	len = _strlen(format);


	va_start(lst, format);


	if ((format == NULL) || ((format[0] == '%') && (!format[1])))
	{
		return (-1);
	}

	if ((format[0] == '%') && (format[1] == ' ')  && !format[2])
	{
		return (-1);
	}


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
			len += select_to_print (format, &i, lst);
			len -= 2;
		}
	}
	va_end(lst);

	return (len);
}
