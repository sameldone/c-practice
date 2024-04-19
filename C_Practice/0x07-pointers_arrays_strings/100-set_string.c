/***********************************************************************************************************
 * 100-set_string.c
 * set_string()-sets the value of a pointer to a char
 * @s-pointer being set
 * @to-what it is being set to
 * return-void
 * *************************************************************************************************/

#include "main.h"

void set_string(char **s,char *to)
{
	*s=to;
}
