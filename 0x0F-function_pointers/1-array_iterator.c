#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a para
 * @array: the array
 * @size: the size of array
 * @action: a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *duck = array + size - 1;

	if (array && size && action)
	{
		while (array <= duck)
		{
			action(*array++);
		}
	}
}
