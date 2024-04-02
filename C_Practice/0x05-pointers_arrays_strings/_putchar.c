/******************************************************************
 * _putchar.c
 * _putchar()-prints a char
 * Return-char
 * *****************************************************************/

#include "main.h"

int _putchar(int n)
{
	return (write(1,&n,1));
}

