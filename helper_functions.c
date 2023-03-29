#include "main.h"

/**
 * func_char - function for printing a char
 * @_printf_: the argument list that has the character
 * @idx: pointer to character counter
 * Return: amount of characters printed
 */

int func_char(va_list _printf_, int *idx)
{
	char c;

	c = (char)va_arg(_printf_, int);
	write(1, &c, 1);
	(*idx)++;
	return (1);
}

/**
 * func_string - function for printing a string
 * @_printf_: the argument list that has the string
 * @idx: pointer to character counter
 * Return: string length
 */

int func_string(va_list _printf_, int *idx)
{
	const char *s;
	int len;


	s = va_arg(_printf_, char *);
	len = strlen(s);

	for (; *s != '\0'; s++)
	{
		write(1, s, 1);
		(*idx)++;
	
	}
	return (len);
}

/**
 * func_percent - function for printing a %
 * @idx: pointer to character counter
 * Return: 1
 */

int func_percent(int *idx)
{
	char percent = '%';

	write(1, &percent, 1);
	(*idx)++;
	return (1);
}
