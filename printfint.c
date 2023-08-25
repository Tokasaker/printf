#include "main.h"
#include <stdio.h>
#include <stdarg.h>

long int convsz(long int n, int size)
{
	return n;
}

int wnum(int is_negative, int k, char stock[], int flags
, int width, int precision, int size)
{
	return 0;
}

/**
 * printfinteger - Print int
 * @types: Lista of Arguments
 * @stock: Stock array to handle print
 * @flags: Calculates active flags
 * @width: Get width.
 * @precision: Precision specification
 * @size: Size of specifier
 * Return: print No. of chars
 */
int printfinteger(va_list types, char stock[], int flags, int width, int precision, int size)
{
    int k = width - 2;
    int is_negative = 0;
    long int n = va_arg(types, long int);
    unsigned long int num;
    n = convsz(n, size);

    if (n == 0)
        stock[k--] = '0';
    stock[width - 1] = '\0';
    num = (unsigned long int)n;
    if (n < 0)
    {
        num = (unsigned long int)((-1) * n);
        is_negative = 1;
    }
    while (num > 0)
    {
        stock[k--] = (num % 10) + '0';
        num /= 10;
    }
    k++;
    return wnum(is_negative, k, stock, flags, width, precision, size);
}
