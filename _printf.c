#include "main.h"

#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
	{
		return (0); }
	va_list lis;
	int noofchar = 0;

	va_start(lis, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				char *string = va_arg(lis, char*);

				if (string == NULL)
				{
					write(1, "(null)", 6);
					noofchar += 6; }
				else
				{
					noofchar += prints(lis, string); }
			}
			else if (*format == 'c')
			{
				noofchar += printc(lis); }
			else if (*format == 'i' || *format == 'd')
			{
				noofchar += printint(lis, format); }
			else
			{
				write(1, format, 1);
				noofchar++;
			}
			format++;
		}
		va_end(lis);
		return (noofchar); }
}

