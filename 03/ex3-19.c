/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.19
 * "Interest Calculator"
 *************************************************/

/*
 -------------------------------------------------------------------------------
 ::  Program Description  ::
 -------------------------------------------------------------------------------
 Develop a program that will input principal, rate and days for several loans,
 and will calculate and display the simple interest for each loan, using the
 preceding formula.
 
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
   int   loanTerm       = 0;
   float interestRate   = 0;
   float loanPrincipal  = 0;
   
   float userInput = 0;
   
   do
   {
      printf("Enter the principal of your loan (-1 to exit): ");
      if(scanf("%f", &userInput) != 1)
      {
         loanPrincipal = -1;
         while (fgetc(stdin) != '\n');
      }
      else
      {
         loanPrincipal = userInput;
      }
      
      
      if(loanPrincipal > 0)
      {
         printf("Enter interest rate: ");
         scanf("%f", &interestRate);
         
         printf("Enter term of the loan in days: ");
         scanf("%d", &loanTerm);
         
         printf("The accured interest will be $%.2f", (loanPrincipal * interestRate * loanTerm) / 365);
         puts("\n\n");
      }  
      
      
   } while (userInput >= 0);
   
   
   
   return 0;
}
