#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * _printf - as printf librery function
 * @format: format of the _printf function
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list valist;
	const char *ptr = format;
	char *c;

	va_start(valist, format);
	while (*ptr)
	{
		if (*(ptr) == '%')
		{
			if (*(ptr + 1) == 's')
			{
				c = va_arg(valist, char *);
				while (*c)
				{
					_putchar(*c);
					c++;
				}
				ptr = ptr + 2;
			}
			else if (*(ptr + 1) == 'c')
			{
				_putchar(va_arg(valist, int));
				ptr = ptr + 2;
			}
		}
		else
		{
			_putchar(*ptr);
			ptr++;
		}
	}
	va_end(valist);
	return (0);
}
