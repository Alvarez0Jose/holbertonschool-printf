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
	putchar(c);
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

	s = va_arg(_printf_, char *);
	if (s == NULL)
		s = "(null)";

	for (; *s != '\0'; s++)
	{
		putchar(*s);
		(*idx)++;
	}
	return (strlen(s));
}

/**
 * func_percent - function for printing a %
 * @idx: pointer to character counter
 * Return: 1
 */

int func_percent(int *idx)
{
	char percent = '%';

	putchar(percent);
	(*idx)++;
	return (1);
}

/**
 * func_int - function for printing an integer
 * @_printf_: list of arguments
 * @idx: pointer to arguments
 * Return: amount of numbers printed
 */

int func_int(va_list _printf_, int *idx)
{
	int n = va_arg(_printf_, int);
	int counter = 0;
	int t;
	int d = 1;
	char dig;

	if (n < 0)
	{
		putchar('-');
		counter++;
		n = -n;
	}

	t = n;

	while (t >= 10)
	{
		t /= 10;
		d *= 10;
	}

	while (d > 0)
	{
		dig = (n / d) % 10 + '0';
		putchar(dig);
		counter++;
		d /= 10;
	}
	*idx += counter;

	return (counter);
}
