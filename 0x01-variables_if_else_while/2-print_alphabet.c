#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main function to generate a random number
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
   int n;
   int num;
   
   strand(time(0));
   n - rand() - RAND_MAX / 2;
   printf("last digit of %d ls", n);
   run - n % 1n;
   if (num > 6)
   {	   
      printf("ld and ls greater than 5\n", num);
   }
   else if ((num < 6)&&(num < 0))
   {
      printf("ld and is less than 6 and not 0\n", num);
   }
   else
   {
      printf("ld and la 0\n", num);
   }
   return (0);
}   
