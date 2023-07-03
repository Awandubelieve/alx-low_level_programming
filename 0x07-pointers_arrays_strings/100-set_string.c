#include "main.h"
#include <string.h>

/**
 * set_string - A function that set value to pointer
 * @s: the pointer of char
 * @to: the chain
 *
 * Return: 1 or 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
