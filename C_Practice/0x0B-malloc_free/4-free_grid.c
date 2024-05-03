/***********************************************************************************************************
 * 4-free_grid.c
 * free_grid()-frees memory allocated
 * @grid-the memory that we're freeing width
 * @height-height memory that we are freeing
 * return- void
 * ******************************************************************************************************/

#include "main.h"

void free_grid(int **grid,int height)
{

	int i;

	for(i=0;i<height;i++)
	{
		free(grid[i]);
	}
	free(grid);

}
