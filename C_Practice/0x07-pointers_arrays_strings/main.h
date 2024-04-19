#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <unistd.h>

char *_memset(char *s,int b,unsigned int n);
char *_memcpy(char *s,char *src,unsigned int n);
char *_strchr(char *str,char c);
char *_strstr(char *haystack,char *needle);
void print_chessboard(char (*a)[8]);
char _putchar(char ch);
void print_diagsums(int *a,int n);
void set_string(char **s,char *to);

#endif
