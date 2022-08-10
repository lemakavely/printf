#include "main.h"

/**
 * print_unsgnd_octal - print unsigned int in base 8
 * @args: argument to be printed
 *
 * Return: number of printed digits
 */

int print_unsgnd_octal(va_list args)
{
	unsigned int k = 0;
	int count = 0, l[11], m = 0;

	k = va_arg(args, unsigned int);
	for (m = 0; k; m++)
	{
		l[m] = k % 8;
		k /= 8;
	}
	for (m = m - 1; m >= 0; m--)
	{
		_putchar(l[m] + '0');
		count++;
	}
	return (count);
}

/**
 * print_unsgnd_int - prints unsigned int
 * @args: to print
 *
 * Return: number of printed digits
 */

int print_unsgnd_int(va_list args)
{
	unsigned int k = 0, i = 0, m = 0, p = 1000000000;
	unsigned int l[10];
	int count = 0;

	m = va_arg(args, unsigned int);
	l[0] = m / p;
	for (i = 0; i < 10; i++)
	{
		if (l[0] && i == 0)
		{
			_putchar(l[0] + '0');
			count++;
			i++;
			k += l[0];
		}
		p /= 10;
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

/**
 * print_unsgnd_binary - print unsigned in binary
 * @args: value to be printed
 *
 * Return: number of digits printed
 */

int print_unsgnd_binary(va_list args)
{
	unsigned int k = 0;
	int count = 0, l[32], m = 0;

	k = va_arg(args, unsigned int);
	for (m = 0; k; m++)
	{
		l[m] = k % 2;
		k /= 2;
	}
	for (m = m - 1; m >= 0; m--)
	{
		_putchar(l[m] + '0');
		count++;
	}
	return (count);
}

/**
 * print_unsgn_hex - prints unsigned int in base 16
 * @args: argument to print
 *
 * Return: number of printed digits
 */

int print_unsgnd_hex(va_list args)
{
	unsigned int k = 0, j = 0, i = 0;
	int count = 0, m = 0;
	unsigned int arr0[] = {10, 11, 12, 13, 14, 15};
	char arr1[] = {'a', 'b', 'c', 'd', 'e', 'f'}, l[8];

	k = va_arg(args, unsigned int);
	for (m = 0; k; m++)
	{
		j = k % 16;
		if (j < 10)
			l[m] = j;
		else
			for (i = 0; i < 6; i++)
				if (j == arr0[i])
					l[m] = arr1[i];
		k /= 16;
	}
	for (m = m - 1; m >= 0; m--)
	{
		if (l[m] < 10)
			_putchar(l[m] + '0');
		else
			_putchar(l[m]);
		count++;
	}
	return (count);
}

/**
 * print_unsgnd_heX - print unsigned int in base 16 upper case
 * @args: argument to print
 *
 * Return: number of chars printed
 */

int print_unsgnd_heX(va_list args)
{
	unsigned int k = 0, j = 0, i = 0;
	int count = 0, m = 0;
	unsigned int arr0[] = {10, 11, 12, 13, 14, 15};
	char arr1[] = {'A', 'B', 'C', 'D', 'E', 'F'}, l[8];

	k = va_arg(args, unsigned int);
	for (m = 0; k; m++)
	{
		j = k % 16;
		if (j < 10)
			l[m] = j;
		else
			for (i = 0; i < 6; i++)
				if (j == arr0[i])
					l[m] = arr1[i];
		k /= 16;
	}
	for (m = m - 1; m >= 0; m--)
	{
		if (l[m] < 10)
			_putchar(l[m] + '0');
		else
			_putchar(l[m]);
		count++;
	}
	return (count);
}
