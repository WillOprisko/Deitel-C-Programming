/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.30
 * "Dangling Else Problem"
 *************************************************/

/*
 -------------------------------------------------------------------------------
 ::  Program Description  ::
 -------------------------------------------------------------------------------
 Determine the output for each of the following when x is 9 and y is 11, and
 when x is 11 and y is 9.
 */


#include <stdio.h>

void danglingElseA (int, int);
void danglingElseB (int, int);

int main(void)
{
   danglingElseA(9, 11);
   puts("");
   danglingElseA(11, 9);
   puts("");
   
   danglingElseB(9, 11);
   puts("");
   danglingElseB(11, 9);
   
     
   
   
   return 0;
}

void danglingElseA (int x, int y)
{
   if (x < 10)
   {
      if (y > 10)
         puts("*****");
      else
         puts("#####");
   }
   
   puts("$$$$$");
}

void danglingElseB (int x, int y)
{
   if (x < 10)
   {
      if (y > 10)
         puts("*****");
   }
   else
   {
      puts("#####");
      puts("$$$$$");
   }
}
