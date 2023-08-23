#include "main.h"

/**
 * gwi - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @k: List of arguments to be printed.
 * @lis: list of arguments.
 *
 * Return: width.
 */
int gwi(const char *format, int *k, va_list lis)
{
	int iter;
	int width = 0;

	for (iter = *k + 1; format[iter] != '\0'; iter++)
	{
		if (is_digit(format[iter]))
		{
			width *= 10;
			width += format[iter] - '0';
		}
		else if (format[iter] == '*')
		{
			iter++;
			width = va_arg(lis, int);
			break;
		}
		else
			break;
	}

	*k = iter - 1;

	return (width);
}
