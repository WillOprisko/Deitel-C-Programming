/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.46
 * "World Population Growth"
 *************************************************/

/*
 ----------------------------------------------------------------------
 ::  Program Description  ::
 ----------------------------------------------------------------------
 Write an application that displays the estimated the world population.
 
 1. Confirm the current world population and the annual world population
    growth rate.
    A.   World Population: 7,430,900,000
    B.   Growth Rate:      0.012
 
 2. Request user input:
    A.   World Population
    B.   Growth Rate
    C.   Time
 
 3. Determine current date
 
 4. Display Estimated World Population
    A.    Based upon scientific data
    B.    Based upon user input
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  WORLD_POPULATION  7430900000     // 7,430,900,000
#define  GROWTH_RATE       0.012     // 0.012
#define  CURRENT_YEAR      2020

int main(void)
{
   /* This program originally used 'long double' data structures
    * but the same results can be obtained when using 'double'.
    *
    * However, the program does not work when using a 'long'
    * data structure for population.  There must be a loss in
    * information when multiplying:
    * 'double' rate by 'long' population.
    */
   double population   = WORLD_POPULATION;
   double rate         = GROWTH_RATE;
   int   year          = 2025;
   double increase     = 0;

   
   /* This program does not round-up but intentionally removes
    * the mantissa when displaying the estimated population
    * increase.
    */
   for(int n = CURRENT_YEAR; n <= year; n++)
   {
      printf("%d\t%ld\t%f\n", n, (long) population, increase);
      increase = population * rate;
      population += increase;
   }
   return 0;
}


/*
 long long population   = WORLD_POPULATION;
 float rate             = GROWTH_RATE;
 int   year             = 0;
 //long long increase     = 0;
 long double increase     = 0;
 
 
 puts("Welcome to the World Population Growth Calculator");
 printf("The current population is %lld.\n\n", population);
 printf("Enter a year to calculate: ");
 scanf("%d", &year);
 
 for(int n = CURRENT_YEAR; n <= year; n++)
 {
 printf("%d\t%lld\t%Lf\n", n, population, increase);
 increase = (long double) population * rate;
 population += increase;
 }
 */

/*
 long double population   = WORLD_POPULATION;
 long double rate         = GROWTH_RATE;
 int   year               = 0;
 long double increase     = 0;
 
 
 puts("Welcome to the World Population Growth Calculator");
 printf("The current population is %.0Lf.\n\n", population);
 printf("Enter a year to calculate: ");
 scanf("%d", &year);
 
 for(int n = CURRENT_YEAR; n <= year; n++)
 {
 printf("%d\t%Lf\t%Lf\n", n, population, increase);
 increase = population * rate;
 population += increase;
 }
 */
