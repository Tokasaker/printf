#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 *  _printf - custom printf function to print characters, strings, and %
 * @format: format specifier string
 * Return: number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
		return (0);
	va_list lis;
	int noofchar = 0;

	va_start(lis, format);
	while (*format)
	{
		if (*format == '%')
		{ format++;
			if (*format == 's')
			{
				char *stringprint = va_arg(lis, char*);

				if (stringprint != NULL)
				{
					int lengthstr = strlen(stringprint);

					write(1, stringprint, lengthstr);
					noofchar += lengthstr; }
				else
				{
					const char *nullString = "(null)";
					int lengthnu = strlen(nullString);

					write(1, nullString, lengthnu);
					noofchar += lengthnu; } }
			else if (*format == 'c')
			{
				int character = va_arg(lis, int);

				write(1, &character, 1);
				noofchar++; } }
		else
		{
			write(1, format, 1);
			noofchar++; }
		format++; }
	va_end(lis);
	return (noofchar); }
