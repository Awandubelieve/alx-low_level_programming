#include "main.h"
#include <string.h>

/**
 * print_diagsums - A function of a square matrix or integers
 * @a: the matrix
 * @size: the length of matrice
 *
 * Return: 1 or 0
 */


void print_diagsums(int *a, int size)
{
	int	i = 0, *ptr, j = 0;

	for (i = 0; i < size; i++)
	{
		ptr = a;
		for (j = 0 ; j < size; j++)
			printf(" %d ", ptr[j]);
		ptr++;
		printf("\n");
	}
}

