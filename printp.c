#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * printfp - Prints a percent sign
 * @types: Arguments' list
 * @stock: Print handled by stock array
 * @flags:  Active flags are calculated
 * @width: get width.
 * @precision: Specification of precision
 * @size: Specifier's size
 * Return: No. of the printed chars
 */
int printfp(va_list types, char stock[], int flags
, int width, int precision, int size)
{
(void)types;
(void)stock;
(void)flags;
(void)width;
(void)precision;
(void)size;
return (write(1, "%%", 1));
}
