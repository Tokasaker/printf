#include "main.h"

/**
 * gsz - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @k: List of arguments to be printed.
 *
 * Return: Precision.
 */
int gsz(const char *format, int *k)
{
	int iter = *k + 1;
	int size = 0;

	if (format[iter] == 'l')
		size = song;
	else if (format[iter] == 'h')
		size = sort;

	if (size == 0)
		*k = iter - 1;
	else
		*k = iter;

	return (size);
}
