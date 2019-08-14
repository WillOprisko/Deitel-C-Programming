/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.24
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
   puts("N\t10*N\t100*N\t1000*N");
   for (int n = 1; n <= 10; n++)
   {
      printf("%d\t", n);
      printf("%d\t", n * 10);
      printf("%d\t", n * 100);
      printf("%d\n", n * 1000);
   }
   
   return 0;
}
