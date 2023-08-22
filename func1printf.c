#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *  _printf - custom printf function to print characters, strings, and %
 *
 * @format: format specifier string
 *
 * Return: number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	int noofcharacters = 0, stringlength = 0;
	va_list lis;

	if (format == NULL)
	{
		return (-1); }
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
			if (*format == '%')
			{
				write(1, format, 1);
				noofcharacters++; }
			else if (*format == 'c')
			{
				char character = va_arg(lis, int);

				write(1, &character, 1);
				noofcharacters++; }
			else if (*format == 's')
			{
				char *stringprint = va_arg(lis, char*);

				while (stringprint[stringlength] != '\0')
				{
					stringlength++; }
				write(1, stringprint, stringlength);
				noofcharacters += stringlength; } }
		format++; }
	va_end(lis);
	return (noofcharacters); }
