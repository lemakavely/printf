#include "main.h"
#include <math.h>

/**
 * print_unsgnd_int - prints unsigned int
 * @arg: to print
 *
 * Return: numbeer of printed digits
 */

int print_unsgnd_int(va_list args)
{
	unsigned int k = 0, i = 0, m = 0, p = 1000000000;
	unsigned int l[10];
	int count;

	m = va_arg(args, unsigned int);
	l[0] = m / p;
	for (i = 0; i < 10;i++)
	{
		if (l[0] && i == 0)
		{
			_putchar(l[0] + '0');
			count++;
			i++;
			k += l[0];
		}
		p = p / 10;
		l[i] = (m / p) % 10;
		k += l[i];
		if (k)
		{
			_putchar(l[i] + '0');
			count++;
		}
	}
	return (count);
}
