#include "main.h"

/**
 * func_char - function for printing a char
 * @_printf_: the argument list that has the character
 * @idx: pointer to character counter
 * @buffer: buffer to store char
 * Return: amount of characters printed
 */

int func_char(va_list _printf_, char *buffer, int *idx)
{
	char c;

	c = (char)va_arg(_printf_, int);
	buffer[(*idx)++] = c;
	return (1);
}

/**
 * func_string - function for printing a string
 * @_printf_: the argument list that has the string
 * @buffer: buffer to store string
 * @idx: pointer to character counter
 * Return: string length
 */

int func_string(va_list _printf_, char *buffer, int *idx)
{
	const char *s;
	int len;


	s = va_arg(_printf_, char *);
	len = strlen(s);

	for (; *s != '\0'; s++)
	{
		buffer[(*idx)++] = *s;

	}
	return (len);
}

/**
 * func_percent - function for printing a %
 * @idx: pointer to character counter
 * @buffer: buffer to store percent sign
 * Return: 1
 */

int func_percent(char *buffer, int *idx)
{
	char percent = '%';

	buffer[(*idx)++] = percent;
	return (1);
}

/**
 * func_int - function for printing an integer
 * @buffer: buffer to store integer
 * @_printf_: list of arguments
 * @idx: pointer to arguments
 * Return: amount of numbers printed
 */

int func_int(va_list _printf_, char *buffer, int *idx)
{
	int n = va_arg(_printf_, int);
	int counter = 0;
	unsigned int un;
	unsigned int t;
	unsigned int d = 1;
	char dig;

	if (n < 0)
	{
		buffer[(*idx)++] = '-';
		counter++;
		n = -n;
	}
	un = (unsigned int)n;
	t = un;

	while (t >= 10)
	{
		t /= 10;
		d *= 10;
	}

	while (d > 0)
	{
		dig = (un / d) % 10 + '0';
		buffer[(*idx)++] = dig;
		counter++;

		d /= 10;
	}

	return (counter);
}
