/*****************************
 * Deitel - C Programming
 * Chapter 2.33
 * "Car-Pool Savings Calculator"
 ******************************/
/*
 I.   main()
      A. Control-Flow of Choices
      B. Store values to share between choices
      C. Provide User with Choices
         1. Allow the user to move from choice 1 through 4
II.   menu()
II.   commuteCost()
      A. Miles to Work
      B. Cost of gasoline per gallon
      C. Average mpg
      D. Daily Parking fee
      E. Total Tolls per day
III.  carPoolSavings()
      A. Number of Colleagues
      B. Distance for each Colleague
IV.   compareTravelTime()
      A. Current Commute Time
      B. Estimated Car-Pool Time
      C. Travel Time
      D. Personal Cost (Time * Current Hourly Rate)
 V.   exit()
      A. exit program 
 */


#include <stdio.h>
#include <stdlib.h>


// This struct is to contain all information required //
// for the commuteCost() function                     //
struct commute
{
   float commuteDistance;
   float fuelCost;
   unsigned short int milesPerGallon;
   float parkingFees;
   float tolls;
};


// This struct builds upon 'struct commute' //
struct carpool
{
   struct commute Commute;
   unsigned short int passengers;
   float carPoolDistance;
};


// This struct uses 'struct commute' and 'struct carpool' //
struct travel
{
   struct commute Commute;
   struct carpool CarPool;
};



int main(void)
{
   int choice = 0;
   

   
   // Clear Screen //
   system("clear");
   
   // Begin Program and Prompt User for Input //
   puts("Welcome to the Car-Pool Savings Calculator.");
   
   while (choice < 4)
   {
      switch(choice)
      {
         case 2 :
            //carpool = carPoolCost();
         case 1 :
            //commute = commuteCost();
            break;
         case 3 :
            //travel = totalTravelCost();
            break;
         default :
            puts("It appears you would like to exit the program.");
            choice = 4;
      }
             
   }
   
   return 0;
}


/* menu()
 puts("Please select an option:");
 puts("");
 puts("1) Determine Current Commute Cost");
 puts("2) Project Potential Car-Pool Savings");
 puts("3) Compare Commute Time to Car-Pool Time");
 puts("4) Exit Program");
 
 printf("%s", ">  ");
 scanf("%d", &choice);
 */
