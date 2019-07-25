/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.16
 * "Gas Mileage"
 *************************************************/

/*
   Develop a program that will input the miles driven and gallons
   used for each tankful.
   1. Calculate and display the miles per gallon obtained for each tankful.
   2. Calculate and print the average MPG for all tankfuls.
 
   // Intialization Phase //
   Initialize gallons to zero
   Initialize totalGallons to zero
 
   Initialize miles to zero
   Initialize totalMiles to zero
 
 
   // Processing Phase //
   While gallons is greater than 0
         Input gallons
         Add gallons to totalGallons
 
         Input miles
         Add miles to totalMiles
 
         Print miles divided by gallons
 
         Clear Screen
 
 
   // Termination Phase //
   Print totalMiles divided by totalGallons
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   float miles         = 1;
   float totalMiles    = 0;
   
   float gallons       = 0;
   float totalGallons  = 0;
   
   int trip = 1;
   
   
   //  Clear Screen  //
   system("clear");
   
   //  Begin Program  //
   puts("Welcome to the MPG Calculator!");
   while (miles > 0)
   {
      if (trip > 1)
      {
         printf("Tell us about your next trip:\n");
      }
      else if (trip <= 1)
      {
         printf("Tell us about your first trip:\n");
         puts("");
      }
      
      printf("%s", "How many miles did you drive?  ");
      scanf("%f", &miles);
      if (miles <= 0)
      {
         //puts("");
         puts("Looks like you stayed home.");
         break;
      }
      
      printf("%s", "How many gallons of gas were used?  ");
      scanf("%f", &gallons);
      if (gallons <= 0 && miles >= 0)
      {
         puts("");
         printf("You drove %.1f miles on %.0f gallons of gas?\n", miles, gallons);
         puts("The fuel efficiency of your vehicle is amazing!!");
         break;
      }
      
      
      
      
      
      totalGallons += gallons;
      totalMiles   += miles;
      trip         += 1;
      
      if (miles > 0 && gallons > 0)
      {
         printf("The MPG for this trip was %.1f\n", miles / gallons);
         puts("");
      }

   }
   
   if (totalMiles > 0 && totalGallons > 0)
   {
      puts("");
      printf("The overall MPG for your vehicle is %.1f\n", totalMiles / totalGallons);
   }

   return 0;
}
