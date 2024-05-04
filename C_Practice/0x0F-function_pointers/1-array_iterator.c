/***********************************************************************************************************
 * 1-array_iterator.c
 * array_iterator()-iterates through an array given in the argument
 * @array-array we are to iterate through 
 * @action- pointer to array_iterator()
 *
 * return-void
 * ******************************************************************************************************/

#include "function_pointers.h"
#include <stdio.h>

void array_iterator(int *array,size_t size, void (*action)(int))
{

	unsigned int i;

	for(i=0;i<size;i++)
	{
		action(array[i]);
	}



}
