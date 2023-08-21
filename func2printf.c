#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  chspc - by printf print c , s and %
 *
 * @space: accept specifer whether s or c or %
 * @lis: list or info required
 *
 * Return: Always 0
 */
int chspc(char space, va_list lis)
{
	int noofcharacters = 0;

	if (space == 'c')
	{
		char character = va_arg(lis, int);

		write(1, &character, 1);
		noofcharacters++;
	}
	else if (space == 's')
	{
		char *stringprint = va_arg(lis, char*);

		write(1, stringprint, strlen(stringprint));
		noofcharacters += strlen(stringprint);
	}
	return (noofcharacters);
}
