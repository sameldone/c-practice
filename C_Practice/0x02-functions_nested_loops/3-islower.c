/******************************************************************
 * is_lower.c
 * _islower()-check to find if input in lower case alphabet
 * Return-0 if not lowercase 1 if lowercase
 * *****************************************************************/

#include "sameldone.h"

int _islower(int c)
{
	if(c<='z'&&c>='a')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
