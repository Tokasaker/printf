#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define stocksz 1024

#define fneg 1
#define fadd 2
#define fero 4
#define fash 8
#define fspc 16

#define song 2
#define sort 1

/**
 * struct foont - Struct op
 *
 * @foont: The format.
 * @fot: The function associated.
 */
struct foont
{
	char foont;
	int (*fot)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct foont foont_t - Struct op
 *
 * @foont: The format.
 * @foont_t: The function associated.
 */
typedef struct foont foont_t;

int _printf(const char *format, ...);
int handlestock(const char *foont, int *k,
		 va_list lis, char stock[], int flags, int width,
		 int precision, int size);


int printfc(va_list types, char stock[],
		int flags, int width, int precision, int size);
int printfs(va_list types, char stock[],
		  int flags, int width, int precision, int size);
int printfp(va_list types, char stock[],
		int flags, int width, int precision, int size);
int handch(char c, char stock[],
	int flags, int width, int precision, int size);
int wnum(int isneg, int ind, char stock[],
	int flags, int width, int precision, int size);

int gfl(const char *format, int *k);
int gwi(const char *format, int *k, va_list lis);
int gpr(const char *format, int *k, va_list lis);
int gsz(const char *format, int *k);
#endif
