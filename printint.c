#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *  printint - by printint print c , s and %
 *
 * @format: accept specifier whether s or c or %
 * @lis: accept list arguments
 *
 * Return: Always 0
 */
int printint(va_list lis, const char *format __attribute__((unused)))
{
int intprint = va_arg(lis, int);
char bufferforint[20];
int lengthint = sprintf(bufferforint, "%d", intprint);
write(1, bufferforint, lengthint);

return (lengthint);
}
