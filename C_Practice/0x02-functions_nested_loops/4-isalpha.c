/******************************************************************
 * 4-isalpha.c
 * _isalpha()-Checks if input is alphabet or not.
 * Return-1 if alphabet 0 if not alphabet.
 * *****************************************************************/

#include "sameldone.h"

int _isalpha(int c)
{
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
