/******************************************************************
 * toupper.c
 * _toupper()-converts lowercase characters to uppercase
 * return-void
 * *****************************************************************/

#include "main.h"

void to_upper(char chr)
{
	if(chr>='a' && chr<='z')
	{
		chr=chr-32;
	}

}
