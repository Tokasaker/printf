#include "main.h"
#include <stdarg.h>
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
va_list lis;
int noofcharacters = 0;

va_start(lis, format);
if (format == 0 || (format[0] == '%' && !format[1]))
	return (-1);
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

		if (*format == 'i' || *format == 'd')
		{
			int intprint = va_arg(lis, int);
			char bufferforint[20];
			int lenghtint = sprintf(bufferforint, "%d", intprint);
			write(1, bufferforint, lenghtint);

			noofcharacters += lenghtint;
		}
	}
	format++;
}
va_end(lis);
return (noofcharacters);
}
