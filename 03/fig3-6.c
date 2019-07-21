/*************************************************
 * Deitel - C Programming
 * Chapter 3.8 -- Figure 3.5 & 3.6
 * "Class Average -- Counter-Controlled Repetition"
 *************************************************/

/*    ::Pseudocode Structure::
 
 Set total to zero
 Set grade counter to one
 
 While grade counter is less than or equal to ten
      Input the next grade
      Add the grade into the total
      Add one to the grade counter
 
 Set the class average to the total divided by ten
 Print the class average
 */

#include <stdio.h>


//  Begin Program Execution  //
int main(void)
{
   unsigned int counter;     //  queue number for the next grade to enter
   int grade;              //  grade value
   int total;              //  sum of grades entered by user
   int average;            //  average of grades
   
   
   //  initialize variables  //
   total   = 0;
   counter = 1;      //  loop counter set to 1 represents the first number
   
   
   //  processing phase  //
   while (counter <= 10)               //  definite repetition--loop 10 times
   {
      printf("%s", "Enter grade: ");   //  prompt for input
      scanf("%d", &grade);             //  read grade from user
      total = total + grade;           //  add grade to total
      counter++;                       //  increment counter
   }
   //  end while-loop  //
   
   //  termination phase  //
   average = total / 10;               //  integer divison
   
   //  display result  //
   printf("Class average is %d\n", average);
   
   return 0;
}
