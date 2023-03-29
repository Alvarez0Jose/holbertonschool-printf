#include "main.h"

/**
 * func_char - function for printing a char
 * @_printf_: the argument list that has the character
 * @idx: pointer to character counter
 */

void func_char(va_list _printf_, int *idx)
{
	char c;

	c = (char)va_arg(_printf_, int);
	write(1, &c, 1);
	(*idx)++;
}

/**
 * func_string - function for printing a string
 * @_printf_: the argument list that has the string
 * @idx: pointer to character counter
 */

void func_string(va_list _printf_, int *idx)
{
	const char *s;

	s = va_arg(_printf_, char *);
	for (; *s != '\0'; s++)
	{
		write(1, s, 1);
		(*idx)++;
	}
}

/**
 * func_percent - function for printing a %
 * @idx: pointer to character counter
 */

void func_percent(int *idx)
{
	char percent = '%';

	write(1, &percent, 1);
	(*idx)++;
}
