#include "main.h"
#include <stdarg.h>
/**
 *  _printf - by printf print c , s and %
 * @format: accept specifer whether s or c or %
 * Return: Always 0
*/
int _printf(const char *format, ...)
{
int noofcharacters = 0;
va_list lis;

if (format == 0)
{
	return (-1) ; }
va_start(lis, format);
while (*format)
{
	if (*format != '%')
	{
		write(1, format, 1);
	noofcharacters++; }
	else
	{
		format++;
		if (*format == '\0')
			break;
		if (*format == 'i')
		{
			int intprint = va_arg(lis, int);

			write(1, &intprint, 1);
			noofcharacters++; }
		else if (*format == 'd')
		{
			int dprintf = va_arg(lis, signed int);
				write(1, &dprintf, 1);
			noofcharacters++; }
		else if (*format == '%')
		{
			write(1, format, 1);
			noofcharacters++; }
	}
}
va_end(lis);
return (noofcharacters);
}
