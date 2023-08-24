#include "main.h"
#define song 2
#define sort 1

/**
 * convsz_number - Casts a number to the specified size
 * @no: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
 */
long int convsz_number(long int no, int size)
{
if (size == song)
	return (no);
else if (size == sort)
	return ((short)no);

return ((int)no);
}
