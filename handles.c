#include "main.h"
/**
 * handlestock - Prints an argument based on its type
 * @foont: Formatted string in which to print the arguments.
 * @lis: List of arguments to be printed.
 * @ind: ind.
 * @stock: Buffer array to handle print.
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: 1 or 2;
 */
int handlestock(const char *foont, int *ind, va_list lis, char stock[],
	int flags, int width, int precision, int size)
{
	int k, unlength = 0, noofchar = -1;
	foont_t foont_types[] = {
		{'c', printfc}, {'s', printfs}, {'%', printfp},
		{'i', print_int}, {'d', print_int}, {'\0', NULL}
	};
	for (k = 0; foont_types[k].foont != '\0'; k++)
		if (foont[*ind] == foont_types[k].foont)
			return (foont_types[k].fot(lis, stock, flags, width, precision, size));

	if (foont_types[k].foont == '\0')
	{
		if (foont[*ind] == '\0')
			return (-1);
		unlength += write(1, "%%", 1);
		if (foont[*ind - 1] == ' ')
			unlength += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (foont[*ind] != ' ' && foont[*ind] != '%')
				--(*ind);
			if (foont[*ind] == ' ')
				--(*ind);
			return (1);
		}
		unlength += write(1, &foont[*ind], 1);
		return (unlength);
	}
	return (noofchar);
}
