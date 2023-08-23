#include "main.h"

/**
 * gpr - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @k: List of arguments to be printed.
 * @lis: list of arguments.
 *
 * Return: Precision.
 */
int gpr(const char *format, int *k, va_list lis)
{
	int iter = *k + 1;
	int precision = -1;

	if (format[iter] != '.')
		return (precision);

	precision = 0;

	for (iter += 1; format[iter] != '\0'; iter++)
	{
		if (is_digit(format[iter]))
		{
			precision *= 10;
			precision += format[iter] - '0';
		}
		else if (format[iter] == '*')
		{
			iter++;
			precision = va_arg(lis, int);
			break;
		}
		else
			break;
	}
	*k = iter - 1;

	return (precision);
}
