/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.23
 * "Find the Largest Number"
 *************************************************/

/*
 -------------------------------------------------------------------------------
 ::  Program Description  ::
 -------------------------------------------------------------------------------
 Write a pseudocode program and then a program that inputs a series of 10
 non-negative numbers and determines and prints the largest of the numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  MAX   10000


int main(void)
{
   int array[MAX] = {0};
   
   int currentNumber = 0;
   int largestNumber = 0;
   int numberIndex   = 0;
   
   
   srand(time(NULL));
   for (int n = 0; n < MAX; n++)
   {
      array[n] = (rand() / 100000) / 2;
      //printf("%d  ", array[n]);
   }
   //puts("");
   
   for (int n = 0; n < MAX; n++)
   {
      if (array[n] > largestNumber)
      {
         largestNumber = array[n];
         numberIndex = n;
      }
   }
   printf("Index %d:  %d\n", numberIndex, largestNumber);
   
   
   return 0;
}
