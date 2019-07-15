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

//  Each structure data type is to allow the program to collect individual data
//  points related to Commuting, Car-Pooling, and Comparing the Cost and Time
//  between commuting and car-pooling.

//  I am using 'structs' in order to avoid incorporating pointers or
//  constructing arrays to hold compiled information that would require
//  source-code knowledge to access the correct element(s).

//  These attempts are designed to keep primary program control within main()
//  and outsource processes to only specialized functions


//  Collect information related to commuting to work //
struct commute
{
   float distance;
   float fuelCost;
   unsigned short int milesPerGallon;
   float parkingFees;
   float tolls;
};


//  Includes information from commuting and collects information related to
//  car-pooling
struct carpool
{
   struct commute Commute;
   unsigned short int passengers;
   float distance;
};


//  Compares information collected in Commute and CarPool
struct travel
{
   struct commute Commute;
   struct carpool CarPool;
};


// Each function is associated with a specific 'struct' data type //
struct commute commuteCost(struct commute);
struct carpool carPoolCost(struct commute, struct carpool);
struct travel  totalTravelCost(struct commute, struct carpool);


// Begin Main Program //
int main(void)
{
   int choice = 0;
   
   // Create each 'struct' data type within main() to control how it is
   // passed, used, and changed by the auxlilary methods
   struct commute Commute = {0};
   struct carpool CarPool = {0};
   struct travel  Travel  = {0};

   
   // Clear Screen //
   system("clear");
   
   // Prompt User for Input //
   puts("Welcome to the Car-Pool Savings Calculator.");
   while (choice < 4)
   {
      switch(choice)
      {
         case 1 :
            Commute = commuteCost(Commute);
            break;
         case 2 :
            CarPool = carPoolCost(Commute, CarPool);
            break;
         case 3 :
            Travel  = totalTravelCost(Commute, CarPool);
            break;
         default :
            puts("It appears you would like to exit the program.");
            choice = 4;
      }
   }
   
   /*
   Commute = commuteCost(Commute);
   printf("%f\n%f\n%hu\n%f\n%f\n",Commute.distance, Commute.fuelCost, Commute.milesPerGallon, Commute.parkingFees, Commute.tolls);
    */
   
   CarPool = carPoolCost(Commute, CarPool);
   printf("%.1f\n", CarPool.Commute.distance);
   printf("%.2f\n", CarPool.Commute.fuelCost);
   printf("%hu\n", CarPool.Commute.milesPerGallon);
   printf("%.2f\n", CarPool.Commute.parkingFees);
   printf("%.2f\n", CarPool.Commute.tolls);
   printf("%d\n", CarPool.passengers);
   printf("%.1f\n", CarPool.distance);
   
   return 0;
}


struct commute commuteCost(struct commute Commute)
{
   for (int n = 1; n <= 5; n++)
   {
      system("clear");
      switch(n)
      {
         case 1 :
            puts("How far do you drive to and from work each day?");
            printf("%s", "Miles:  ");
            scanf("%f", &Commute.distance);
            break;
         case 2 :
            puts("What is the current cost of gasoline?");
            printf("%s", "Price Per Gallon:  ");
            scanf("%f", &Commute.fuelCost);
            break;
         case 3 :
            puts("What is the fuel economy of your vehicle?");
            printf("%s", "Car MPG:  ");
            scanf("%hu", &Commute.milesPerGallon);
            break;
         case 4 :
            puts("Please provide the cost for parking.");
            printf("%s", "Daily Parking Fee:  ");
            scanf("%f", &Commute.parkingFees);
            break;
         case 5 :
            puts("If you pay tolls, provide the cost of tolls to and from work.");
            printf("%s", "Tolls:  ");
            scanf("%f", &Commute.tolls);
            break;
         default :
            puts("Error with commuteCost() function.");
            n = 6;
      }
   }
   
   return Commute;
}


struct carpool carPoolCost(struct commute Commute, struct carpool CarPool)
{
   float travelDistance = 0;
   
   if (Commute.distance <= 0)
   {
      CarPool.Commute = commuteCost(Commute);
   }
   else
   {
      CarPool.Commute = Commute;
   }
   
   system("clear");
   puts("How many people will be riding with you?");
   printf("%s", "Passengers:  ");
   scanf("%hu", &CarPool.passengers);

   
   for (int n = 1; n <= CarPool.passengers; n++)
   {
      system("clear");
      
      if (n > 1 && n < CarPool.passengers)
      {
         puts("What is door-to-door distance to pick-up the next passenger?");
      }
      else if (n == CarPool.passengers)
      {
         puts("What is the door-to-door distance to pick-up the last passenger?");
      }
      else if (n == 1 && CarPool.passengers == 1)
      {
         puts("How far will you drive to pick-up your co-worker?");
      }
      else
      {
         puts("How far will you drive to pick-up the first passenger?");
         
      }
      
      printf("Distance in miles:  ");
      scanf("%f", &travelDistance);
      CarPool.distance += (travelDistance * 2);
      
   }
   
   // Clear Screen //
   system("clear");
   
   // Accouts for the fact that the last passenger may not live closer to work
   // than the individual who is commuting alone
   puts("What is the roundtrip distance from the your last carpool stop to work?");
   scanf("%f", &travelDistance);
   CarPool.distance += travelDistance;
   
   
   return CarPool;
}


struct travel  totalTravelCost(struct commute Commute, struct carpool CarPool)
{
   struct travel Travel;
   return Travel;
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
