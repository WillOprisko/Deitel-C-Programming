/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.45
 * "Factorial"
 *************************************************/

/*
 ----------------------------------------------------------------------
 ::  Program Description  ::
 ----------------------------------------------------------------------
 The factorial of a nonnegative integer n is written n!
 (pronounced “n factorial”) and is defined as follows:
 
      n!=n·(n-1)·(n-2)·...·1 (for values of n greater than or equal to 1)
 and
      n!=1 (for n = 0)
 
 Example: 5! = 5 · 4 · 3 · 2 · 1, which is 120.
      a) Write a program that reads a nonnegative integer and computes and prints its factorial.
 
      b) Write a program that estimates the value of the mathematical constant e by using the formula:
 
      c) Write a program that computes the value of (e)x by using the formula
 */

#include <stdio.h>

int main(void)
{
   unsigned long long int factorial = 1;
   long long int userInput;
   
   if(scanf("%lld", &userInput) == 1 && userInput > 0)
   {
      for (int n = 0; n < userInput; n++)
      {
         factorial *= userInput - n;
      }
      
      if (factorial > 0)
      {
         printf("%llu\n", factorial);
      }
   }
   else
   {
      while(fgetc(stdin) != '\n');
   }
   
   return 0;
}
