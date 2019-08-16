/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.39
 * "Checkerboard Pattern of Asterisks"
 *************************************************/

/*
 ----------------------------------------------------------------------
 ::  Program Description  ::
 ----------------------------------------------------------------------
 Write a program that displays a checkerboard pattern using only three output
 statements, one of each of the following forms:
         printf( "%s", "* " );
         printf( "%s", " " );
 
 */

#include <stdio.h>

int main(void)
{
   for (int n = 1; n <= 8; n++)
   {
      if ((n % 2) == 0)
         printf( "%s", " " );
      
      for (int i = 1; i <= 8; i++)
         printf( "%s", "* " );
      
      puts( "" );
   }
   
   return 0;
}
