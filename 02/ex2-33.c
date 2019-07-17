/*****************************
 * Deitel - C Programming
 * Chapter 2.33
 * "Car-Pool Savings Calculator"
 ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



//  Each structure data type is to allow the program to collect individual data
//  points related to Commuting, Car-Pooling, and Comparing the Cost and Time
//  between commuting and car-pooling.

//  I am using 'structs' in order to avoid incorporating pointers or
//  constructing arrays to hold associated information that would require
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
   float totalCost;
   int travelTime;
};


//  Includes information from commuting and collects information related to
//  car-pooling
struct carpool
{
   struct commute Commute;
   unsigned short int passengers;
   float distance;
   float totalCost;
   int travelTime;
};


//    //
struct travel
{
   struct commute Commute;
   struct carpool CarPool;
   int averageSpeed;
};


// Each function is associated with a specific 'struct' data type //
struct commute commuteCost(struct commute);
struct carpool carPoolCost(struct commute, struct carpool);
struct travel  compareTravel(struct commute, struct carpool, struct travel);


//  Compares information collected in 'commute' and 'carPool'
void displayResults(struct commute, struct carpool, struct travel, int);


//  Moved the menu to a separate function in order to allow the user to
//  make another selection without reseting the values in each 'struct'
int menu(void)
{
   int selection = 0;
   
   puts("Please select an option:");
   puts("");
   puts("1) Determine Current Commute Cost");
   puts("2) Project Potential Car-Pool Savings");
   puts("3) Compare Commute Time to Car-Pool Time");
   puts("4) Exit Program");
   
   printf("%s", ">  ");
   scanf("%d", &selection);
   
   return selection;
}


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
   do
   {
      choice = menu();
      switch(choice)
      {
         case 1 :
            printf("%d\n", choice);
            Commute = commuteCost(Commute);
            break;
         case 2 :
            printf("%d\n", choice);
            CarPool = carPoolCost(Commute, CarPool);
            Commute = CarPool.Commute;
            break;
         case 3 :
            printf("%d\n", choice);
            Travel  = compareTravel(Commute, CarPool, Travel);
            Commute = Travel.Commute;
            CarPool = Travel.CarPool;
            break;
         case 4 :
         default :
            puts("");
            puts("It appears you would like to exit the program.");
            choice = 4;
      }
      
      displayResults(Commute, CarPool, Travel, choice);
   } while (choice < 4);
   
   return 0;
}


//  //
struct commute commuteCost(struct commute Commute)
{
   for (int n = 1; n <= 5; n++)
   {
      system("clear");
      switch(n)
      {
         case 1 :
            puts("How far do you drive to work each day?");
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
   
   //  Double the distance to represent a round trip to and from work  //
   Commute.distance *= 2;
   Commute.totalCost = ((Commute.distance / Commute.milesPerGallon)
                       * Commute.fuelCost
                       + Commute.parkingFees
                       + Commute.tolls);
   
   return Commute;
}


//  //
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
      // Clear Screen //
      system("clear");
      
      if (n > 1 && n < CarPool.passengers)
      {
         puts("What is door-to-door distance to pick-up the next passenger?");
      }
      else if (n != 1 && n == CarPool.passengers)
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
      
      printf("Miles:  ");
      scanf("%f", &travelDistance);
      CarPool.distance += (travelDistance * 2);
   }
   //  Account for the Driver  //
   CarPool.passengers += 1;
   
   // Clear Screen //
   system("clear");
   
   // Accouts for the fact that the last passenger may not live closer to work
   // than the individual who is commuting alone
   puts("What is the distance from the your last carpool stop to work?");
   printf("Miles:  ");
   scanf("%f", &travelDistance);
   CarPool.distance += travelDistance * 2;
   
   CarPool.totalCost = (((CarPool.distance / CarPool.Commute.milesPerGallon)
                        * CarPool.Commute.fuelCost
                        + CarPool.Commute.parkingFees
                        + CarPool.Commute.tolls)
                        / CarPool.passengers);
   
   return CarPool;
}


//    //
struct travel compareTravel(struct commute Commute,
                            struct carpool CarPool,
                            struct travel Travel)
{
   if (Commute.distance <= 0 && CarPool.distance <= 0)
   {
      Travel.CarPool  = carPoolCost(Commute, CarPool);
      Travel.Commute  = Travel.CarPool.Commute;
   }
   else if (Commute.distance > 0 && CarPool.distance <= 0)
   {
      Travel.Commute = Commute;
      Travel.CarPool = carPoolCost(Commute, CarPool);
   }
   else
   {
      Travel.Commute = Commute;
      Travel.CarPool = CarPool;
   }
   
   //  Clear Screen  //
   system("clear");
   
   puts("On a typical day, how fast do you typically drive?");
   printf("%s", "Car MPH:  ");
   scanf("%d", &Travel.averageSpeed);
   
   Travel.Commute.travelTime = ( Travel.Commute.distance
                               / Travel.averageSpeed)
                               * 60;
   
   Travel.CarPool.travelTime = ( Travel.CarPool.distance
                               / Travel.averageSpeed)
                               * 60;

   return Travel;
}


//    //
void displayResults(struct commute Commute,
                    struct carpool CarPool,
                    struct travel  Travel, int n)
{
   char ch;
   
   switch(n)
   {
      case 1 :
         system("clear");
         printf("Commute Cost: $%.2f\n", Commute.totalCost);
         break;
      case 2 :
         system("clear");
         printf("Commute Cost: $%.2f\t", CarPool.Commute.totalCost);
         printf("Car-Pool Cost: $%.2f\n", CarPool.totalCost);
         break;
      case 3 :
         system("clear");
         printf("Commute Cost: $%.2f\t", Travel.Commute.totalCost);
         printf("Car-Pool Cost: $%.2f\n", Travel.CarPool.totalCost);
         printf("Commute Time: %d mins\t", Travel.Commute.travelTime);
         printf("Car-Pool Time: %d mins\n", Travel.CarPool.travelTime);
         break;
      case 4 :
      default :
         ;
   }
   
   
   if (n >= 1 && n <= 3)
   {
      printf("Press [ENTER] to contine . . .  ");
      scanf("%c%*c",&ch);
      system("clear");
   }
}
