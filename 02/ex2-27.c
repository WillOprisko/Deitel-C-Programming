/*****************************
 * Deitel - C Programming
 * Chapter 2.27
 * "Checkerboard Pattern"
 ******************************/

#include <stdio.h>
#include <stdlib.h>


void printCheckerBoard(void);
int  buildCheckerBoard(void);

void printEvenLine(void);
void printOddLine(void);

// Not currently working //
// void timeDelay(void); //

int main(void)
{
   int n = 0;
   
   // Clear the Screen //
   system("clear");
   
   puts("Welcome to the ASCII and Unicode Checkerboard Maker!");
   puts("Please select an option:");
   puts("1) Print ASCII Checker Board");
   puts("2) Build Unicode Checker Board");
   puts("3) Exit Program");
   
   printf("%s", "\nEnter a number  ");
   scanf("%d", &n);
   
   switch(n)
   {
      case 1 :
         printCheckerBoard();
         break;
      case 2 :
         buildCheckerBoard();
         break;
      default :
         puts("");
         puts("It looks like you want to exit the program.");
         puts("Have a nice day!");
   }
   
   return 0;
}

void printCheckerBoard(void)
{
   // Clear the Screen //
   system("clear");
   printf("* * * * * * * * \n"
          " * * * * * * * *\n"
          "* * * * * * * * \n"
          " * * * * * * * *\n"
          "* * * * * * * * \n"
          " * * * * * * * *\n"
          "* * * * * * * * \n"
          " * * * * * * * *\n");
}

int buildCheckerBoard(void)
{
   int n = 1;
   
   // Clear the screen //
   system("clear");
   while (n <= 8)
   {
      // The delay in printing each line is to simulate
      // 'building' the checkerboard
      for (long i = 0; i < 200000000; i++) {;}
      
      // Control-Flow for which checkerboard row to print
      if ((n % 2) == 0)
      {
         printEvenLine();
      }
      else if ((n % 2) != 0)
      {
         printOddLine();
      }
      else
      {
         puts("Error with buildCheckerBoard() function");
         puts("Program exiting...");
         return 1;
      }

      n++;
   }
   
   return 0;
}

void printEvenLine(void)
{
   for (int n = 1; n <= 16; n++)
   {
      if ((n % 2) != 0)
      {
         // Unicode Grey Sqaure
         printf("\u2592");
      }
      else if((n % 2) == 0)
      {
         // Unicode White Square
         printf("\u2593");
      }
   }
   
   // Create a new line //
   puts("");
}

void printOddLine(void)
{
   for (int n = 1; n <= 16; n++)
   {
      if ((n % 2) != 0)
      {
         // Unicode White Square
         printf("\u2593");
      }
      else if((n % 2) == 0)
      {
         // Unicode Grey Sqaure
         printf("\u2592");
      }
   }
   
   // Create a new line //
   puts("");
}

// Function not working as intended //
// Debugger and more research required //

/*
 void timeDelay(void)
{
   time_t begin       = 0;
   time_t end         = 0;
   long int timeDifference = 0;

   time(&begin);
   while (timeDifference < 1 )
   {
      time(&end);
      timeDifference = difftime(end, begin);
   }
}
*/
