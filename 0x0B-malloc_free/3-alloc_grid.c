#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - A function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width imput of integer
 * @height: height imput of integer
 * Return: width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **hw;
	int a, b;

	hw = malloc(sizeof(int *) * height);

		if (width <= 0 || height <= 0 || hw == 0)
		{
			return (NULL);
		}
		else
		{
			for (a = 0; a < height; a++)
			{
				hw[a] = malloc(sizeof(int) * width);
				if (hw[a] == 0)
				{
					/*Free malloc if everything fails*/
				while (a--)
					free(hw[a]);
				free(hw);
				return (NULL);
				}

				for (b = 0; b < height; b++)
					hw[a][b] = 0;
			}
		}
		return (hw);
}
