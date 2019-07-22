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
   total   = 0;     //  initialize total to zero
   counter = 0;     //  initialize loop counter to zero
   
   
   //  Processing Phase  //
   //  obtain the first grade from user
   printf("%s", "Enter grade, -1 to end: ");    //  prompt user for input
   scanf("%d", &grade);                         //  read grade from user
   
   //  loop while sentinel value is not entered by the user
   while (grade != -1)
   {
      total = total + grade;     //  add grade to total
      counter = counter + 1;     //  increment counter
      
      //  get next grade from user
      printf("%s", "Enter grade, -1 to end: ");    //  prompt user for input
      scanf("%d", &grade);                         //  read next grade
   }
   //  end while-loop
   
   
   //  Termination Phase  //
   //  if user entered at least one grade
   if (counter != 0)
   {
      //  calculate average of all grades entered
      average = (float) total / counter;        //  cast int to float to avoid
                                                //  truncation
      
      //  display average with two digits of precision
      printf("Class average is %.2f\n", average);
   }
   else
   {
      //  if no grades were entered, output message
      puts("No grades were entered");
   }
      
   return 0;
}
