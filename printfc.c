#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * printfc - Prints a char
 *
 * @types: Arguments' list
 * @stock: stock array to handle stock
 * @flags: Calculates active flags
 * @width: Width
 * @precision: Specification of precision
 * @size: Specifier's size
 *
 * Return: No. of characters printed
 */
int printfc(va_list types, char stock[], int flags
, int width, int precision, int size)
{
char c = va_arg(types, int);

return (printf("%c", c));
}
