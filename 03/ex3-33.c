/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.33
 * "Hollow Square of Asterisks"
 *************************************************/

/*
 -------------------------------------------------------------------------------
 ::  Program Description  ::
 -------------------------------------------------------------------------------
 The program should read in the side of a square and then prints a hollow sqaure
 out of asterisks. Your program should work for squares of all side sizes between
 1 and 20.
 */

#include <stdio.h>

int main(void)
{
   int userInput;
   
   puts("Please enter a number in the rage of 2 through 20.");
   printf("Number:  ");
   if(scanf("%d", &userInput) != 1)
   {
      while (fgetc(stdin) != '\n');
      puts("");
      puts("You did not enter a valid number.");
   }
   else if (userInput >= 2 && userInput <= 20)
   {
      for (int n = 1; n <= userInput; n++)
      {
         for (int i = 1; i <= userInput; i++)
         {
            if (n == 1 || n == userInput)
            {
               printf("*");
            }
            else if (i == 1 || i == userInput)
            {
               printf("*");
            }
            else
            {
               printf(" ");
            }
         }
         
         printf("\n");
      }
   }
   return 0;
}
