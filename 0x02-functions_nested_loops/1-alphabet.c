#include "main.h"

/**
 * print_alphabet - A function that prints alphabet in lowercase
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
