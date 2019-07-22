/*************************************************
 * Deitel - C Programming
 * Chapter 3.9 -- Figure 3.8
 * "Class Average -- Sentinel-Controlled Repetition"
 *************************************************/

/*          ::Description::
 Develop a class-averaging program that will process an arbitary number
 of grades each time the program is run.
 
            ::Pseudocode Structure::
 
 Initialize total to zero
 Initialize counter to zero
 
 Input the first grade
 While the user has not entered the sentinel
      Add this grade into the running total
      Add one to the grade counter
      Input the next grade (possibly the sentinel)
 
 If the counter is not equal to zero
      Set the average to the total divided by the counter
      Print the average
 else
      Print "No grades were entered"
 */


#include <stdio.h>

int main(void)
{
   unsigned int counter;      //  number of grades entered
   int grade;                 //  grade values
   int total;                 //  sum of grades
   
   float average;             //  number with a decimal point for average
   
   //  Initialization Phase  //
   
   
   return 0;
}
