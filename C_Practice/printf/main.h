#ifndef _MAIN_H
#define _MAIN_H


#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct format{

	char *id;
	int (*f)();

};


int  _putchar(char c);
int print_str(va_list args);
int _strlen(char *str);
int print_char(va_list args);
int put_mod(void);
int _printf(const char *format, ...);
int print_double(va_list args);
int print_num(va_list args);
int put_binary(va_list args);
int print_unsigned(va_list args);
int put_octal(va_list args);
int put_hex(va_list args);
int put_Hex(va_list args);
int put_Hexa(unsigned int num);
int put_hexa(unsigned long int num);
int print_Str(va_list args);
int print_p(va_list args);
int rev_str(va_list args);
int rot13(va_list args);


#endif
