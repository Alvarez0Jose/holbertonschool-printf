#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
void func_char(va_list _printf_, int *idx);
void func_string(va_list _printf_, int *idx);
void func_percent(int *idx);

#endif
