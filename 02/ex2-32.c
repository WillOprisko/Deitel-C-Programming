/*****************************
 * Deitel - C Programming
 * Chapter 2.32
 * "Body Mass Index Calculator"
 ******************************/

#include <stdio.h>
#include <stdlib.h>

/*
 I.   main()
 II.  calculateBMI()
      A. Receive int       // user input
      B. Return  float     // calculated BMI
 III. customaryUnits()
      A. Receive void
      B. Return float      // US measurements BMI
 IV.  metricUnits()
      A. Receive void
      B. Return float      // Metric units BMI
 V.   displayBMI()
*/


int main(void)
{
   int  choice = 0;
   float index = 0;
   
   puts("Welcome to the Body Mass Index Calculator!");
   puts("Please make a selection.");
   puts("1) U.S. customary Units");
   puts("2) International Metric Units");
   puts("3) Exit program");
   
   printf("%s", ">>  ");
   scanf("%d", &choice);
   
   
   // Control Flow for User Input //
   // Exit program if the user enters '3' or an invalid value
   if (choice != 1 || choice != 2)
   {
      puts("It appears you would like to exit the program.");
      puts("Have a nice day!");
      return 0;
   }
   //
   else if (choice == 1 || choice == 2)
   {
      
   }
   
   
   return 0;
}





