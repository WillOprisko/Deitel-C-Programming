/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.38
 * "Counting 7s"
 *************************************************/

/*
 ----------------------------------------------------------------------
 ::  Program Description  ::
 ----------------------------------------------------------------------
 Write a program that reads an integer (5 digits or fewer) and determines
 and prints how many digits in the integer are 7s.
 */

#include <stdio.h>

int main(void)
{
   int userInput;
   int numberOfSevens = 0;
   
   puts("Welcome to the Counting 7s Program!");
   puts("Please enter a non-negative integer between 1-99999");
   printf("Number:  ");
   if (scanf("%d", &userInput) != 1)
   {
      while(fgetc(stdin) != '\n');
      puts("\nNo number was provided.");
   }
   else if (userInput < 1 || userInput > 99999)
   {
      puts("\nThe number was invalid.");
   }
   else
   {
      printf("%d\n", userInput);
      for (int n = 1; n <=5; n++)
      {
         if ((userInput % 10) == 7)
         {
            numberOfSevens++;
         }
         
         userInput /= 10;
      }
      
      printf("%d\n", numberOfSevens);
   }
   
   return 0;
}
