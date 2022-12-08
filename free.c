#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - free memory
 * @grid: paramenter
 */
void free_grid(char **grid)
{
	int i;


	for (i = 0; grid[i] != NULL; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
