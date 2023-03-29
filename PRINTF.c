#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - custom printf
 * @format: type of argument used.
 * Return: amount of printed items
 */

int _printf(const char *format, ...)
{
	va_list _printf_;
	int idx = 0;
	const char *P;
	
	va_start(_printf_, format);

	if (_printf_ == NULL || format == NULL)
		return (-1);
	for (P = format; *P != '\0'; P++)
	{
		if (*P == '%')
		{
			P++;
			switch (*P)
			{
				case 'c':
					func_char(_printf_, &idx);
					break;
				case 's':
					func_string(_printf_, &idx);
					break;
				case '%':
					func_percent( &idx);
					break;
				case 'd': case 'i':
					func_int(_printf_, &idx);
					break;
				default:
					write(1, &idx, 1);
					write(1, P, 1);
					idx += 2;

			}
		}
		else
		{
			write(1, P, 1);
			idx++;
		}
	}
	va_end(_printf_);
	return (idx);
}
