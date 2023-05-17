#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *alloc_grid - returns a pointer to a 2 dimensional array of integers.
  *@width: input
  *@height: input
  *
  *Return: height & width
  *
  */
int **alloc_grid(int width, int height)
{
	int **you;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);
	you = malloc(sizeof(int *) * height);
	if (you == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		you[a] = malloc(sizeof(int) * width);
		if (you[a] == NULL)
		{
			for (; a >= 0; a--)
				free(you[a]);
			free(you);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			you[a][b] = 0;
	}
	return (you);
}
