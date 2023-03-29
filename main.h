#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int func_char(va_list _printf_, char *buffer, int *idx);
int func_string(va_list _printf_, char *buffer, int *idx);
int func_percent(char *buffer, int *idx);
int func_int(va_list _printf_, char *buffer, int *idx);

#endif
