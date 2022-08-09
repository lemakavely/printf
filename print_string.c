#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_string - putchar function.
 *@string: int variable.
 *Return: Always 0.
 */

int print_string(char *string)
{
	int count = 0;

	for (int i = 0; string[i] != '\0'; i++)
		count += _putchar(string[i]);

	return (count);

}
