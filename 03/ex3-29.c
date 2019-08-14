/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.29
 * "Determine the Output"
 *************************************************/

/*
 -------------------------------------------------------------------------------
 ::  Program Description  ::
 -------------------------------------------------------------------------------
 What does the following program print?
 */

#include <stdio.h>

int main(void)
{
   unsigned int row = 10;
   unsigned int column;
   
   while (row >= 1)
   {
      column = 1;
      
      while (column <= 10)
      {
         printf("%s", row % 2 ? "<" : ">");
         ++column;
      }
      
      --row;
      puts("");
   }

   return 0;
}
