/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.26
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
#include <stdlib.h>
#include <time.h>

#define  MAX   1000

int main(void)
{
   int largestNumber       = 0;
   int secondLargestNumber = 0;
   
   int array[MAX] = {0};
   
   srand(time(NULL));
   for (int n = 0; n < MAX; n++)
   {
      array[n] = (rand() / 10000) / 2;
      
      if (array[n] > largestNumber)
      {
         largestNumber = array[n];
      }
      
      if (array[n] > secondLargestNumber && array[n] < largestNumber)
      {
         secondLargestNumber = array[n];
      }
   }
   
   printf("Largest: %d\nSecond Largest: %d\n", largestNumber, secondLargestNumber);     
   
   return 0;
}
