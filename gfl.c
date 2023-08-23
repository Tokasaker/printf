#include "main.h"

/**
 * gfl - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @k: take a parameter.
 * Return: Flags:
 */
int gfl(const char *format, int *k)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int l, iter;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {fneg, fadd, fero, fash, fspc, 0};

	for (iter = *k + 1; format[iter] != '\0'; iter++)
	{
		for (l = 0; FLAGS_CH[l] != '\0'; l++)
			if (format[iter] == FLAGS_CH[l])
			{
				flags |= FLAGS_ARR[l];
				break;
			}

		if (FLAGS_CH[l] == 0)
			break;
	}

	*k = iter - 1;

	return (flags);
}
