#include "main.h"
/**
 * wnum - Prints a string
 * @isneg: Lista of arguments
 * @ind: char types.
 * @stock: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: precision specifier
 * @size: Size specifier
 *
 * Return: Number of chars printed.
 */
int wnum(int isneg, int ind, char stock[]
, int flags, int width, int precision, int size)
{
int length = stocksz - ind - 1;
char sadd = ' ', exch = 0;

UNUSED(size);

if ((flags & fero) && !(flags & fneg))
	sadd = '0';
if (isneg)
	exch = '-';
else if (flags & fadd)
	exch = '+';
else if (flags & fspc)
	exch = ' ';

return (wnum(ind, stock, flags, width, precision
, length, sadd, exch));
}
