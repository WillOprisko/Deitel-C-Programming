/*****************************
 * Deitel - C Programming
 * Chapter 2.24
 * "Odd or Even"
 ******************************/

#include <stdio.h>

int main(void)
{
   unsigned int n = 0;
   
   printf("%s", "Please enter a non-negative integer: ");
   scanf("%d", &n);
   
   if (n % 2 == 0)
   {
      printf("The number %d is even.\n", n);
   }
   else
   {
      printf("The number %d is odd.\n", n);
   }
   
   return 0;
}
