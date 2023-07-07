#include<unistd.h>

/**
 * _putchar -writes the c character  to stdout
 * c - character to be printed
 *
 * Return : 1 (success)
 * on error, -1 is returned
 */
int _putchar(char c)
{

	return(write(1, &c, 1));
}
