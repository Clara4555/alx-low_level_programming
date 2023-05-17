#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *free_grid - function that frees a 2 dimensional grid
  *@grid: 2 dimensional array
  *@height: height of grid
  *Return:noting
  *
  */
void free_grid(int **grid, int height)
{
	int o;

	for (o = 0; o < height; o++)
	{
		free(grid[o]);
	}
	free(grid);
}
