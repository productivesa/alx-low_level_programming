#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 * @grid: address of two dimentional grid
 * @height: heighth of the grid
 * Return: Always 0 exit
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
