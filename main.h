#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int func_char(va_list _printf_, int *idx);
int func_string(va_list _printf_, int *idx);
int func_percent(int *idx);
int func_int(va_list _printf_, int *idx);

#endif
