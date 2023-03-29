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
	char *buffer;
	int buf_size = 1024;


	buffer = malloc(buf_size * sizeof(char));
	if (!buffer)
		return (-1);

	va_start(_printf_, format);

	if (_printf_ == NULL || format == NULL)
		return (-1);

	for (P = format; *P != '\0'; P++)
	{
		if (idx >= buf_size - 1)
		{
			write(1, buffer, idx);
			idx = 0;
		}
		if (*P == '%')
		{
			P++;
			switch (*P)
			{
				case 'c':
					func_char(_printf_, buffer, &idx);
					break;
				case 's':
					func_string(_printf_, buffer, &idx);
					break;
				case '%':
					func_percent(buffer, &idx);
					break;
				case 'd':
				case 'i':
					func_int(_printf_, buffer, &idx);
					break;
			}
		}
		else
		{
			buffer[idx++] = *P;
		}
	}
	write(1, buffer, idx);
	free(buffer);

	va_end(_printf_);

	return (idx);
}
