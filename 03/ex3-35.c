/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.35
 * "Printing the Decimal Equivalent of a Binary Number"
 *************************************************/

/*
 -------------------------------------------------------------------------------
 ::  Program Description  ::
 -------------------------------------------------------------------------------
 Input an integer (5 digits or fewer) containing only 0s and 1s
 (i.e. “binary” integer) and print its decimal equivalent.
 */

#include <stdio.h>

int main(void)
{
   int userInput;
   int binary  = 1;
   int decimal = 0;
   
   puts("Binary to Decimal Conversion Program");
   printf("Enter a 5-bit binary number:  ");
   
   if(scanf("%d", &userInput) != 1)
   {
      while(fgetc(stdin) != '\n');
      puts("");
      puts("You did not enter a valid integer.");
   }
   else if (userInput >= 1 && userInput <= 11111)
   {
      for (int n = 1; n <= 5; n++)
      {
         if (userInput % 10 == 1)
         {
            decimal += binary;
         }
         else if (userInput % 10 > 1)
         {
            decimal = 0;
            break;
         }
         
         userInput /= 10;
         binary *= 2;
      }
   }
   
   
   if (decimal >= 1)
   {
      printf("%d\n", decimal);
   }
   else
   {
      puts("You did not enter a binary number.");
   }
   
   
   return 0;
}
