/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.42
 * "What's Wrong with the Statement"
 *************************************************/

/*
 ----------------------------------------------------------------------
 ::  Program Description  ::
 ----------------------------------------------------------------------
 What’s wrong with the following statement? Rewrite it to accomplish what the
 programmer was probably trying to do.
 
 Problem:
 printf( "%d", ++( x + y ) );
 
 Solution:
 printf("%d", (x+y) + 1);
 */

#include <stdio.h>

int main(void)
{
   int x = 2;
   int y = 7;
   
   printf("%d\n", (x + y) + 1);
   
   return 0;
}

