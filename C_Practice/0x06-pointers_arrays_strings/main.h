#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

char *_strcat(char *dest,char *src);
char *_strncat(char *dest,char *src,int n);
char *_strncpy(char *dest,char *src,int n);
int _strcmp(char *str1,char *str2);
void reverse_array(int *a,int n);
char *string_toupper(char *str);
void to_upper(char chr);
char *cap_string(char *str);
char *leet(char *str);
char *rot13(char *str);
void print_number(int n);
char _putchar(char chr);

#endif
