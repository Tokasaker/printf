#include "main.h"
#include <unistd.h>

/**
 * handch - Prints a character
 * @c: char type.
 * @stock: Stock array to handle print
 * @flags: Calculates active flags.
 * @width: Width specifier.
 * @precision: Precision specifier.
 * @size: Size specifier.
 *
 * Return: Number of characters printed.
 */
int handch(char c, char stock[]
, int flags, int width, int precision, int size)
{
int k = 0;
char padding_char = ' ';

(void) precision;
(void) size;

if (flags & fero)
	padding_char = '0';

stock[k++] = c;
stock[k] = '\0';

if (width > 1)
{
	stock[width - 1] = '\0';
	for (k = 0; k < width - 1; k++)
		stock[width - k - 2] = padding_char;
	if (flags & fneg)
		return (write(1, &stock[0], 1) +
				write(1, &stock[width - k - 1], width - 1));
	else
		return (write(1, &stock[width - k - 1], width - 1) +
				write(1, &stock[0], 1));
}
return (write(1, &stock[0], 1));
}
