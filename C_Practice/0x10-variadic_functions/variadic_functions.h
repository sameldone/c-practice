#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

/*HEADER FILES*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*PROTOTYPES*/

void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
