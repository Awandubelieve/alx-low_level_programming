#include "main.h"
#include <string.h>

/**
 * _strstr - A function that calculate the substring
 * @haystack: the chain
 * @needle: the chain
 *
 * Return: 1 or 0
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}

