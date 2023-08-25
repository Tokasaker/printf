#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *  printc - by printc print c , s and %
 * @lis: list of arguments
 *
 * Return: Always 0
 */

int printc(va_list lis)
{
int noofchar = 0;
int character = va_arg(lis, int);
write(1, &character, 1);
noofchar++;
return (noofchar);
}
