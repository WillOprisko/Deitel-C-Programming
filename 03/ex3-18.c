/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.18
 * "Sales Commission Calculator"
 *************************************************/

/*
 -------------------------------------------------------------------------------
                     ::  Program Description  ::
 -------------------------------------------------------------------------------
 Develop a program that will input each salesperson’s gross sales for last week
 and will calculate and display that salesperson’s earnings. Process one
 salesperson's figures at a time.

 -------------------------------------------------------------------------------
                     ::  Program Outline  ::
 -------------------------------------------------------------------------------
 
 -------------------------------------------------------------------------------
                     ::  Pseudocode Structure  ::
 -------------------------------------------------------------------------------

*/

#include <stdio.h>


int main(void)
{
   float userInput = 0;
   float salary    = 200;
   
   do
   {
      printf("Enter your sales in dollars (-1 to exit): ");
      
      if(scanf("%f", &userInput) != 1)
      {
         while (fgetc(stdin) != '\n');       // CLEAR STANDARD INPUT BUFFER //
         userInput  = -1;
      }
      else if(userInput >= 0)
      {
         printf("Salary for the month will be: $%.2f\n\n\n", salary + (userInput * 0.09));
      }
      
   } while (userInput >= 0);
   
   
   return 0;
}
