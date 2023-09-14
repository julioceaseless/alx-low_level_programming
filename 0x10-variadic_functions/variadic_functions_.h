#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>
/**
 * struct variables - struct for variables
 * @i: integer
 * @c: character
 * @f: float
 * @s: string
 */
typedef struct variables
{
	int i;
	char c;
	float f;
	char *s;
} vars;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
