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

float calculateBMI    (int);
float customaryBMI   (void);
float metricBMI      (void);

void  displayBMI     (float);


int main(void)
{
   int  choice = 0;
   float index = 0;
   
   // Clear Screen //
   system("clear");
   
   // Begin Program //
   puts("Welcome to the Body Mass Index Calculator!");
   puts("Please make a selection.");
   puts("1) U.S. customary Units");
   puts("2) International Metric Units");
   puts("3) Exit program");
   
   printf("%s", "-> ");
   scanf ("%d", &choice);
   
   // Clear Screen //
   system("clear");
   
   // Control Flow for User Input //
   switch(choice)
   {
      case 1 :
      case 2 :
         index = calculateBMI(choice);
         break;
      // Exit program if the user enters '3' or an invalid value
      default :
         puts("It appears you would like to exit the program.");
         puts("Have a nice day!\n");
         return 0;
   }
   
   displayBMI(index);
   return 0;
}


float calculateBMI(int n)
{
   float indexValue = 0;
   
   switch(n)
   {
      case 1 :
         indexValue = customaryBMI();
         break;
      case 2 :
         indexValue = metricBMI();
         break;
      default :
         puts("Fatal error in calculateBMI().");
   }
   
   return indexValue;
}


float customaryBMI(void)
{
   float weight = 0;
   float height = 0;
   float result = 0;
   
   printf("%s", "Please provide your current weight in lbs:  ");
   scanf("%f", &weight);
   
   printf("%s", "Next enter your height in inches:  ");
   scanf("%f", &height);
   
   result = (weight * 703) / (height * height);
   
   return result;
}


float metricBMI(void)
{
   float weight = 0;
   float height = 0;
   float result = 0;
   
   printf("%s", "Please provide your current weight in kgs:  ");
   scanf("%f", &weight);
   
   printf("%s", "Next enter your height in meters:  ");
   scanf("%f", &height);
   
   result = weight / (height * height);
   
   return result;
}

void displayBMI(float n)
{
   // One Space of Padding //
   puts("");
   puts("BMI CHART");
   
   
   if (n < 18.5)
   {
      // Change Text Background Color //
      printf("\033[46m");
      printf("Underweight:  less than 18.5 ");
      
       // Reset Background //
      printf("\033[0m");
      printf("\t\t<- Your current BMI is %.1f\n", n);
   }
   else
   {
      puts("Underweight:  less than 18.5");
   }
   
   
   if (n >= 18.5 && n <= 24.9)
   {
      
      // Change Text Background Color //
      printf("\033[42m");
      printf("Normal:       between 18.5 and 24.9 ");
   
      // Reset Background //
      printf("\033[0m");
      printf("\t\t<- Your current BMI is %.1f\n", n);
   }
   else
   {
      puts("Normal:       between 18.5 and 24.9");
   }
   
   
   if (n >= 25.0 && n <= 29.9)
   {
      // Change Text Background Color //
      printf("\033[43m");
      printf("Overweight:   between 25 and 29.9 ");
      
      // Reset Background //
      printf("\033[0m");
      printf("\t\t<- Your current BMI is %.1f\n", n);
   }
   else
   {
      puts("Overweight:   between 25 and 29.9");
   }
   
   
   if (n >= 30.0)
   {      
      // Change Text Background Color //
      printf("\033[41m");
      printf("Obese:        30 or greater ");
      
      // Reset Background //
      printf("\033[0m");
      printf("\t\t<- Your current BMI is %.1f\n", n);
   }
   else
   {
      puts("Obese:        30 or greater");
   }
   
}



