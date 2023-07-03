#include "main.h"

/**
 * _strchr - A function that return a string
 * @s: the chain
 * @c: the char
 *
 * Return: 1 or 0
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0' && *s != c; ++s)
		;
	return (*s == c ? (char *) s : NULL);
}

