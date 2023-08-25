#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int prints(va_list lis, char*_attribute_(unused));
int printc(va_list lis);
int printint(va_list lis, const char *format_attribute_(unused));

#endif
