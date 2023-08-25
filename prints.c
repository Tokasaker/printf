#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 *  prints - by prints print c , s and %
 *
 * @lis: accept list arguments
 * @unused: unused parameter
 *
 * Return: number of characters printed
 */
int prints(va_list lis, char *unused __attribute__((unused)))
{
int noofchar = 0;
char *stringprint = va_arg(lis, char*);

if (stringprint != NULL)
{
	int lengthstr = strlen(stringprint);

	write(1, stringprint, lengthstr);

	noofchar += lengthstr;
}
else
{
	const char *nullString = "(null)";
	int lengthnu = strlen(nullString);

	write(1, nullString, lengthnu);
	
	noofchar += lengthnu;
}
return noofchar;
}
