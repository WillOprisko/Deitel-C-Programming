/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.40
 * "Multiples of 2 with an Infinite Loop"
 *************************************************/

/*
 ----------------------------------------------------------------------
 ::  Program Description  ::
 ----------------------------------------------------------------------
 Write a program that keeps printing the multiples of the integer 2,
 namely 2, 4, 8, 16, 32, 64, and so on. Your loop should not terminate
 (i.e., you should create an infinite loop).
 
 What happens when you run this program?
 */

#include <stdio.h>

int main(void)
{
   int n = 2;
   
   while (n != 0)    // After the integer overflow, the value turns to 0
   {
      printf("%d\n", n);
      n *= 2;
   }
   
   return 0;
}
