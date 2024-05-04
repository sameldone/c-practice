/***********************************************************************************************************
 * 0-print_name.c
 * print_name()-prints a name
 * @name- name input
 * @-pointer to a function
 *
 * return-Void
 * ******************************************************************************************************/

#include "function_pointers.h"
#include <stdio.h>

void print_name(char *name,void(*f)(char *))
{
	if(name&&f)
	{
		f(name);
	}
}
