#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 *main - The  program will assign a random number to the variable n
 *Description: 'check for number if it is possitive or nagative'
 *Return: 0 (success)
 */
int main(void)
{
        int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is possitive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is nagative\n", n);
	}
	return (0);
}	
