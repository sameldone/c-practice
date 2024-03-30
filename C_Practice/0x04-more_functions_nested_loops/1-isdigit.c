/******************************************************************
 * 1-isdigit.c
 * _isdigit()-checks if the value given is a digit
 * Return-0 if not a digit 1 if a digit
 * *****************************************************************/

#include "main.h"

int _isdigit(int digit)
{
	if(digit>='0'&&digit<='9')
	{
		return(1);
	}
	return(0);
}
