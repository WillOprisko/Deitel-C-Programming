/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.37
 * "Detecting Multiples of 10"
 *************************************************/

/*
 -------------------------------------------------------------------------------
 ::  Program Description  ::
 -------------------------------------------------------------------------------
 Write a program that prints 100 asterisks, one at a time. After every tenth
 asterisk, your program should print a newline character.
 */

#include <stdio.h>

int main(void)
{
   for (int n = 1; n <= 100; n++)
   {
      printf("*");
      if (n % 10 == 0)
      {
         printf("\n");
      }
   }
   
   return 0;
}
