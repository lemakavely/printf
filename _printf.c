#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *_printf - to print
 *@format: input;
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int i = 0;

	va_list data;

	va_start(data, format);

	for (i = 0; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count = count + _putchar(va_arg(data, int));
					break;
				case 's':
					count += print_string(va_arg(data, char *));
					break;
				case '%':
					count = count + _putchar('%');
					break;
				case 'd':
					count += print_decimal(va_arg(data, int));
					break;
				default:
					break;
			}
			i += 2;
		}
	}

	return (count);

}
