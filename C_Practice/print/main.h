#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct format
{
	char *id;
	int (*f)();
}match;

int _putchar(char ch);
int _strlen(char *str);
int print_mod(void);
int print_str(va_list args);
int print_char(va_list args);
int _printf(const char *format, ...);


#endif
