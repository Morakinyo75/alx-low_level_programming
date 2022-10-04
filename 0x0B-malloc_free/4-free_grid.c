#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 d array
 * @grid: 2d grid
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for(i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
