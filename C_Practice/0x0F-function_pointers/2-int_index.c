/***********************************************************************************************************
 * 2-int_index.c
 * int_index()-check if number is integer
 * @array-array of numbers
 * @size-size of the array
 * @cmp-pointer to the function int_index()
 *
 * return-integer
 * ******************************************************************************************************/

#include "function_pointers.h"

int int_index(int *array,int size,int (*cmp)(int))
{

	int i;
	if(size<=0)
	{
		return(-1);
	}


	for (i = 0; i < size;i++)
	{
		if(cmp(array[i]))
		{
			return(i);
		}
	}

	return(-1);



}
