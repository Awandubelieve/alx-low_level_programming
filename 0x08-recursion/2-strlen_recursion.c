#include "main.h"

/**
 * _strlen_recursion - A function that returns a length
 * @s: string
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
