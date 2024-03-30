/******************************************************************
 * 0-isupper.c
 * _isupper()-Checks if the given parameter is uppercase 
 * Return- 1 if uppercase 0 if not uppercase
 * *****************************************************************/

#include "main.h"

int _isupper(int letter)
{
	if(letter>='A'&&letter<='Z')
	{
		return(1);
	}
	
	return(0);

}
