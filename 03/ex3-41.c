/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.41
 * "Diameter, Circumference and Area of a Circle"
 *************************************************/

/*
 ----------------------------------------------------------------------
 ::  Program Description  ::
 ----------------------------------------------------------------------
 Write a program that reads the radius of a circle (as a float value) and
 computes and prints the diameter, the circumference and the area.
 
 Use the value 3.14159 for π.
 */

#include <stdio.h>

int main(void)
{
   float pi       = 3.14159;
   float radius   = 0;
   float diameter = 0;
   float area     = 0;
   
   float userInput   = 0;
   
   
   puts("Welcome to Circle Dimensions Calculator!");
   printf("Please enter the circle radius:  ");
   
   if (scanf("%f", &userInput) != 1)
   {
      while (fgetc(stdin) != '\n');
      puts("\nThe number was invalid.");
   }
   else if (userInput < 0)
   {
      puts("\nThe number must be non-negative.");
   }
   else
   {
      radius = userInput;
      printf("Diameter        %.2f\n", radius * 2);
      printf("Circumference   %.2f\n", 2 * pi * radius);
      printf("Area            %.2f\n", pi * (radius * radius));
   }
   
   return 0;
}
