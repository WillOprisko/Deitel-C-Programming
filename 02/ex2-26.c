/*****************************
 * Deitel - C Programming
 * Chapter 2.26
 * "Multiples"
 ******************************/

#include <stdio.h>

int main(void)
{
   int n1 = 0;
   int n2 = 0;
   
   puts("Welcome to the Multiples Program!");
   puts("Please enter two integers.");
   
   printf("%s", "First:  ");
   scanf("%d", &n1);
   
   printf("%s", "Second: ");
   scanf("%d", &n2);
   
   
   if ((n2 % n1) == 0)
   {
      printf("The number %d is a multiple of %d\n", n1, n2);
   }
   else if ((n2 % n1) != 0)
   {
      printf("The number %d is not a multiple of %d\n", n1, n2);
   }
   else
   {
      puts("You did not enter a valid non-negative integer.");
   }
   
   
   return 0;
}
