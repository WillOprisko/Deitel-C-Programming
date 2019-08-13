/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.19
 * "Salary Calculator"
 *************************************************/

/*
 -------------------------------------------------------------------------
 ::  Program Description  ::
 -------------------------------------------------------------------------
 Given a list of the employees of the company, the number of hours each
 employee worked last week and the hourly rate of each employee.
 
 Your program should input this information for each employee and should
 determine and display the employee's gross pay.
 
 -------------------------------------------------------------------------
 ::  Program Outline  ::
 -------------------------------------------------------------------------
 
 -------------------------------------------------------------------------
 ::  Pseudocode Structure  ::
 -------------------------------------------------------------------------
 
 */

#include <stdio.h>

int main(void)
{
   int   hoursWorked    = 0;
   float payRate        = 0;
   float salary         = 0;
   
   float userInput      = 0;
   
   do
   {
      printf("Enter the hours worked this week: ");
      if(scanf("%d", &hoursWorked) != 1 || hoursWorked == -1)
      {
         userInput = -1;
         while(fgetc(stdin) != '\n');
      }
      else
      {
         printf("Enter established the pay rate: ");
         if(scanf("%f", &payRate) != 1)
         {
            userInput = -1;
            while(fgetc(stdin) != '\n');
         }
         else
         {
            salary = (hoursWorked <= 40) ? payRate * hoursWorked : (payRate * 40) + ((payRate * 1.5) * (hoursWorked % 40));
            printf("Salary payment is $%.2f\n\n", salary);
         }
      }
   } while (userInput >= 0);
   
   
   
   return 0;
}
