#ifndef FUNC1PRINTF_H
#define FUNC1PRINTF_H

#include "main.h"
#include <stdio.h>
/**
 *  _printf - by printf print c , s and %
 *
 * @format: accept specifer whether s or c or %
 *
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
int noofcharacters = 0;
va_list lis;

if (format == NULL)
{
	return (-1);
}
va_start(lis, format);
while (*format)
{
	if (*format != '%')
	{
		write(1, format, 1);
		noofcharacters++;
	}
	else
	{
		format++;
		if (*format == '\0')
			break;
		if (*format == '%')
		{
			write(1, format, 1);
			noofcharacters++;
		}
		else
		{
			noofcharacters += chspc(*format, lis);
		}
	}
	format++;
}
va_end(lis);
return (noofcharacters);
}
#endif
