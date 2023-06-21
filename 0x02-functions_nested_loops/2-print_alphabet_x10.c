#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet
 * in lowercase, followed by a new line
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int ab = 0;
	char ch;

	while (ab++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
