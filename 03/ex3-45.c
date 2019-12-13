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

unsigned long long factorialGenerator (int n);
long double eConstantGenerator (int n, int x);
//long double eXDerivativeGenerator (int n);

int main(void)
{
   int userInput = 0;
   unsigned long long factorial = 1;
   long double eConstant = 1;
   
   puts  ("Welcome to the Factorial Generator!");
   puts  ("Provide an integer between 0-65.");
   printf("Number: ");
   scanf ("%d", &userInput);
   
   factorial = factorialGenerator(userInput);
   eConstant = eConstantGenerator(userInput, 1);
   
   printf("%d!: %llu\n", userInput, factorial);
   printf("e:  %Lf\n", eConstant);
   
   return 0;
}


unsigned long long factorialGenerator (int n)
{
   unsigned long long factorial = 1;
   while (n > 0)
   {
      factorial *= n;
      n--;
   }
   
   return factorial;
}


long double eConstantGenerator (int n, int x)
{
   unsigned long long factorial = 1;
   long double eConstant = 1;
   for (int i=1; i <= n; i++)
   {
      factorial = factorialGenerator(i);
      //printf("%llu\n", factorial);
      
      eConstant += (long double) x / factorial;
      //printf("%Lf\n", eConstant);
   }
   
   return eConstant;
}
