/***********************************************************************************************************
 * 3-get_op_func.c
 * get_op_func()-select the correct operation function to use.
 * ******************************************************************************************************/

#include "3-calc.h"

int (*get_op_func(char *s))(int,int)
{

	op_t ops[]={
		{"+",op_add},
		{"-",op_div},
		{"*",op_mul},
		{"/",op_div},
		{"%",op_mod},
	};

	int i = 0;
	
	while (i<10)
	{
		if(s[0]==ops->op[i])
		{
			break;
		}
		i++;
	}

	return(ops[i/2].f);

}
