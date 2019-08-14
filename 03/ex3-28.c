/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.28
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
   unsigned int count = 1;       // initialize count
   while (count <= 10)
   {
      puts(count % 2 ? "****" : "++++++++");
      ++count;
   }   
   
   return 0;
}
