/******************************************************************
 * 1-swap.c
 * swap_int()-Swaps the value of two integers
 * Return-void
 * *****************************************************************/

#include "main.h"

void swap_int(int *a_ptr, int *b_ptr)
{
	int tmp=*b_ptr;/*Temporarily store whatever is in a_ptr in tmp*/
	*b_ptr=*a_ptr;/*The value stored int address of a_ptr is given to b_ptr*/
	*a_ptr=tmp;/*The value initially held by b_ptr is tranfered to a_ptr*/


	/**
	int a=*a_ptr; 
	int b=*b_ptr;
	*a_ptr=b;
	*b_ptr=a;
	*/
}
