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
   Initialize miles to one
   Initialize totalMiles to zero
 
   Initialize gallons to zero
   Initialize totalGallons to zero
 
   Initialize trip to zero
 
 
   // Processing Phase //
   Clear Screen
   Print program message
 
   While miles is greater than 0
         If trip greater than one
            Print message about next trip
         Else-if trip is less than or equal to one
            Print message about first trip
 
         Input miles
         Add miles to totalMiles
         If miles is less than or equal to zero
            Print exit message
            Break while-loop
 
         Input gallons
         Add gallons to totalGallons
         If miles is greater than 0 and gallons is less than or equal to zero
            Print exit message
            Break while-loop
 
         Add miles to totalMiles
         Add gallons to totalGallons
         Increment trip by one
 
         if miles is greater than 0 and gallons is greater than 0
            Print miles divided by gallons
 
 
   // Termination Phase //
   If totalMiles and totalGallons are both greater than 0
      Print totalMiles divided by totalGallons
 
   Exit Program
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   float miles         = 1;      //  miles driven during the trip
   float totalMiles    = 0;      //  total miles driven
   
   float gallons       = 0;      //  gallons of gas used for the trip
   float totalGallons  = 0;      //  total gallons of gas used
   
   int trip = 1;                 //  trip number being entered
   
   
   //  Clear Screen  //
   system("clear");
   
   //  Begin Program  //
   puts("Welcome to the MPG Calculator!");
   while (miles > 0)
   {
      //  Indicates the program is aware of how many trips the user enters
      if (trip > 1)
      {
         printf("Tell us about your next trip:\n");
      }
      else if (trip <= 1)
      {
         printf("Tell us about your first trip:\n");
         puts("");
      }
      
      //  Prompt User  //
      printf("%s", "How many miles did you drive?  ");
      scanf("%f", &miles);
      //  Exit While-Loop //
      if (miles <= 0)
      {
         //puts("");
         puts("Looks like you stayed home.");
         break;
      }
      
      //  Prompt User  //
      printf("%s", "How many gallons of gas were used?  ");
      scanf("%f", &gallons);
      //  Exit While-Loop  //
      if (gallons <= 0 && miles >= 0)
      {
         puts("");
         printf("You drove %.1f miles on %.0f gallons of gas?\n", miles, gallons);
         puts("The fuel efficiency of your vehicle is amazing!!");
         break;
      }
      
      //  Update variables  //
      totalGallons += gallons;
      totalMiles   += miles;
      trip         += 1;
      
      //  Output Trip MPG  //
      if (miles > 0 && gallons > 0)
      {
         printf("The MPG for this trip was %.1f\n", miles / gallons);
         puts("");
      }

   }
   
   //  Before Program Exit, Output total MPG  //
   if (totalMiles > 0 && totalGallons > 0)
   {
      puts("");
      printf("The overall MPG for your vehicle is %.1f\n", totalMiles / totalGallons);
   }

   return 0;
}
