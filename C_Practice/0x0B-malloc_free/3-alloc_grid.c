/***********************************************************************************************************
 * 3-alloc_grid.c
 * alloc_grid()-creates a two dimensional array
 * @width-width of the array 
 * @height-height of the array 
 * return-pointer to the two dimensional array 
 * ******************************************************************************************************/

#include "main.h"

int **alloc_grid(int width,int height)
{

	int i,j;
	int **gridout;
	if(width<1||height<1)
		return(NULL);


	gridout=malloc(sizeof(int *)*height);

	if(gridout==NULL)
		return(NULL);


	for(i=0;i<height;i++)
	{
		gridout[i]=malloc(sizeof(int)*width);
		if(gridout[i]==NULL)
		{
			for(i--;i>=0;i--)
			{
				free(gridout[i]);
			}
			free(gridout);
			return(NULL);
		}
	}

	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			gridout[i][j]=0;
		}
	}

	return(gridout);
}
