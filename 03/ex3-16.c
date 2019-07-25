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
   While gallons is greater than -1
         Input gallons
         Add gallons to totalGallons
 
         Input miles
         Add miles to totalMiles
 
         Print miles divided by gallons
 
         Clear Screen
 
 
   // Termination Phase //
   Print totalMiles divided by totalGallons
 */

int main(void)
{
   float gallons       = 0;
   float totalGallons  = 0;
   
   float miles         = 0;
   float totalMiles    = 0;
   
   while (gallons >= 0)
   {
      printf("%s", "How many gallons did your vehicle use?  ");
      scanf("%d", &gallons);
      
      printf("%s", "How many miles did you drive?  ");
      scanf("%d", &miles);
      
      totalGallons += gallons;
      totalMiles   += miles;
      
      printf("The miles-per-gallon for this trip was %.2f\n", gallons / miles);
   }
   
   
   return 0;
}
