<<<<<<< HEAD
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: string
 * @height: string to match
 * Return: 2d array
*/

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				/* free everything if malloc fails */
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				tab[i][j] = 0;
		}
	}

	return (tab);
}
=======
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: string
 * @height: string to match
 * Return: 2d array
*/

int **alloc_grid(int width, int height)
{
        int **tab, i, j;

        tab = malloc(sizeof(*tab) * height);

        if (width <= 0 || height <= 0 || tab == 0)
        {
                return (NULL);
        }
        else
        {
                for (i = 0; i < height; i++)
                {
                        tab[i] = malloc(sizeof(**tab) * width);
                        if (tab[i] == 0)
                        {
                                /* free everything if malloc fails */
                                while (i--)
                                        free(tab[i]);
                                free(tab);
                                return (NULL);
                        }

                        for (j = 0; j < width; j++)
                                tab[i][j] = 0;
                }
        }

        return (tab);
}
>>>>>>> 89f441bd3c9e51983461bc35f0fa74d70927884a
