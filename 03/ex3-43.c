/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.43
 * "Sides of a Triangle"
 *************************************************/

/*
 ----------------------------------------------------------------------
 ::  Program Description  ::
 ----------------------------------------------------------------------
 Write a program that reads three nonzero integer values and determines
 and prints whether they could represent the sides of a triangle.
 */

#include <stdio.h>

int main(void)
{
   int a = 0;
   int b = 0;
   int c = 0;
   
   puts("Welcome to the Triangle Verification Program!");
   puts("Please enter three non-negative integers.");
   
   printf("Number 1:  ");
   scanf("%d", &a);
   
   printf("Number 2:  ");
   scanf("%d", &b);
   
   printf("Number 3:  ");
   scanf("%d", &c);
   
   while(fgetc(stdin) != '\n');
   
   if(a > 0 && b > 0 && c > 0)
   {
      if ((a+b) > c && (b+c) > a && (c+a) > b)
      {
         printf("\nThe integers %d, %d, and %d are valid sides of a triangle\n", a, b, c);
      }
      else
      {
         puts("\nThese values cannot represent a valid triangle.");
      }
   }
   else
   {
      puts("\nOne or more values are invalid.");
   }
   
   
   return 0;
}
