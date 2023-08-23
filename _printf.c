#include "main.h"

#include <stdarg.h>
#include <stddef.h>
void printstock(char stock[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int k, yprint = 0, noofchar = 0;

	int buff_ind = 0;
	va_list lis;
	char stock[stocksz];

	if (format == NULL)
		return (-1);

	va_start(lis, format);

	for (k = 0; format && format[k] != '\0'; k++)
	{
		if (format[k] != '%')
		{
			stock[buff_ind++] = format[k];
			if (buff_ind == stocksz)
				printstock(stock, &buff_ind);
			/* write(1, &format[i], 1);*/
			noofchar++;
		}
		else
		{
			printstock(stock, &buff_ind);
			int flags = gfl(format, &k);
			int width = gwi(format, &k, lis);
			int precision = gpr(format, &k, lis);
			int size = gsz(format, &k);
			++k;
			yprint = handlestock(format, &k, lis, stock,
					flags, width, precision, size);
			if (yprint == -1)
				return (-1);
			noofchar += yprint;
		}
	}

	printstock(stock, &buff_ind);

	va_end(lis);

	return (noofchar);
}

/**
 * printstock - Prints the contents of the buffer if it exist
 * @stock: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void printstock(char stock[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &stock[0], *buff_ind);
	*buff_ind = 0;
}
