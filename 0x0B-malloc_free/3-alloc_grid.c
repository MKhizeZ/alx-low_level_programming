#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocating a pointer to a two dimensional array
 * @width: Input width
 * @height: Input height
 * Return: 2D pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int D1, D2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (D1 = 0; D1 < height; D1++)
	{
		ptr[D1] = malloc(sizeof(int) * width);

		if (ptr[D1] == NULL)
		{       

			while (D1 >= 0)
			{
				free(ptr[D1]);
				D1--;
			}

			free(ptr);
			return (NULL);
		}
	}
        
	D1 = 0;
	while (D1 < height)
	{
		for (D2 = 0; D2 < width; D2++)
		{
			ptr[D1][D2] = 0;
		}
	  D1++;
	}

	return (ptr);
}
