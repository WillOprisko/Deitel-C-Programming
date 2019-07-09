/*****************************
 * Deitel - C Programming
 * Chapter 2.27
 * "Checkerboard Pattern"
 ******************************/

#include <stdio.h>
#include <stdlib.h>

void printCheckerBoard(void);
void buildCheckerBoard(int);

int main(void)
{
   int n = 0;
   
   // Clear the Screen //
   system("clear");
   
   puts("Welcome to the ASCII Asterisk Checkerboard Maker!");
   puts("Please select an option:");
   puts("1) Print Checker Board");
   puts("2) Build Checker Board");
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

void printCheckerBoard()
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

void buildCheckerBoard()
{
   // Clear the screen //
   system("clear");
   
}
