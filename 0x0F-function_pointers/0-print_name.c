#include "function_pointers.h"

/**
 * print_name - is a function that print a name
 * @name: name pointer
 * @f: pointer to  function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
