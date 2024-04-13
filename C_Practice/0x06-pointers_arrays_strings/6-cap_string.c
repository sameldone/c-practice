/******************************************************************
 * 6-cap_string.c
 * cap_string()-capitalizes all words of a string
 * return-capitalized words of a string
 * *****************************************************************/

#include "main.h"

char *cap_string(char *str)
{
	int i;

	/*Change the first character of the string to uppercase.
	 */
	if(str[0]>='a'&&str[0]<='z')
	{
		str[0]=str[0]-32;
	}


	for(i=0;(str[i]!='\0');i++)
	{
		if((str[i]>='a'&&str[i]<='z')&&(str[i-1]==' '||str[i-1]=='\n'||str[i-1]=='\t'||str[i-1]=='.'||str[i-1]=='}'||str[i-1]=='{'||str[i-1]==','))
		{
			str[i]=(str[i]-32);
		}
	}
	return(str);
}
