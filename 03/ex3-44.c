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
#include <math.h>

int main(void)
{
   int a = 0;
   int b = 0;
   int c = 0;
   
   puts("Welcome to the Right-Triangle Verification Program!");
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
      if (sqrt((a*a)+(b*b)) == c ||
          sqrt((b*b)+(c*c)) == a ||
          sqrt((c*c)+(a*a)) == b)
      {
         printf("\nThe integers %d, %d, and %d are valid sides of a right triangle\n", a, b, c);
      }
      else
      {
         puts("\nThese values cannot represent a valid right-triangle.");
      }
   }
   else
   {
      puts("\nOne or more values are invalid.");
   }
   
   
   return 0;
}
