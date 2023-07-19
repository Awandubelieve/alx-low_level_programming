#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints the name
 * @name: String name
 * @f: function
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
