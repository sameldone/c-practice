/******************************************************************
 * 1-swap.c
 * swap_int()-Swaps the value of two integers
 * Return-void
 * *****************************************************************/

#include "main.h"

void swap_int(int *a_ptr, int *b_ptr)
{
	int a=*a_ptr;
	int b=*b_ptr;
	*a_ptr=b;
	*b_ptr=a;
}
