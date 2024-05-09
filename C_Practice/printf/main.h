#ifndef _MAIN_H
#define _MAIN_H

/*----MACROS-------------*/
#define SUCCESS 1

/*----HEADER FILES-------*/
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/*____PROTOTYPES__________*/

int _putchar(char c);
int print_str(va_list args);
int _strlen(char *str);
int print_char(va_list args);
int put_mod(void);
int _printf(const char *format, ...);
int print_double(va_list args);
int print_num(va_list args);
int put_binary(va_list args);



#endif
