/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.25
 * "Tabular Output"
 *************************************************/

/*
 -------------------------------------------------------------------------------
 ::  Program Description  ::
 -------------------------------------------------------------------------------
 Write a program that uses looping to print the following table of values. Use
 the tab escape sequence, \t, in the printf statement to separate the columns
 with tabs.
 */

#include <stdio.h>

int main(void)
{
   int n;
   printf("A\tA+2\tA+4\tA+6\n\n");
   
   n = 3;
   while (n <= 15)
   {
      printf("%d\t", n);
      printf("%d\t", n + 2);
      printf("%d\t", n + 4);
      printf("%d\n", n + 6);
      
      n += 3;
   }
   
   return 0;
}
