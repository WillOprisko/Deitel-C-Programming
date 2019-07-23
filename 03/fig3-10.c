/*************************************************
 * Deitel - C Programming
 * Chapter 3.10 -- Figure 3.10
 * "Class Average -- Sentinel-Controlled Repetition"
 *************************************************/

/*
               ::Problem Statement::
 
 A college offers a course that perpares students for the state licensing exam
 for real estate brokers.  Last year, 10 of the students who completed this
 course took the licensing examination.  Naturally, the college wants to know
 how well its students did on the exam.  You've been asked to write a program
 to summarize the results.  You've been given a list of these 10 students.
 Next to each name a 1 is written if the student passed the exam and a 2 if the
 student failed.
 
 Your program should analyze the results of the exam as follows:
      1. Input each test result (i.e. a 1 or a 2).  Display the prompting
         message "Enter result" each time the program requests another test
         result.
 
      2. Count the number of test results of each type.
 
      3. Display a summary of the test results indicating the number of students
         who passed and the number who failed.
 
      4. If more than eight students passed the exam, print the message
         "Bonus to instructor!"
 
 
               ::Description::
 Analyze exam results and decide whether instructor should receive a bonus
 
               ::Pseudocode Structure::
 
 // First Refinement //
 Initialize variables
 Input the ten quiz grades and count passes and failures
 Print a summary of the exam results and decide whether instructor should
   receive a bonus
 
 // Second Refinement //
 Initialize passes to zero
 Initialize failures to zero
 Initialize student to one
 
 While student counter is less than or equal to ten
      Input the next exam result
 
      If the student passed
            Add one to passes
      else
            Add one to failures
 
      Add one to student counter
 
 Print the number of passes
 Print the number of failures
 If more than eight students passed
      Print "Bonus to instructor!"
 */

#include <stdio.h>

//  Begin program execution  //
int main(void)
{
   //  Initialization Phase  //
   unsigned int passes   = 0;          //  number of passes
   unsigned int failures = 0;          //  number of failures
   unsigned int student  = 1;          //  student counter
   int result;       // one exam result
   
   
   //  Processing Phase  //
   while (student <= 10)
   {
      //  Prompt user for input and obtain value from user
      printf("%s", "Enter result ( 1=pass, 2=fail ): ");
      scanf("%d", &result);
      
      //  Increment passes, if result equals 1
      if (result == 1)
      {
         passes += 1;
      }
      //  Otherwise, increment failures
      else
      {
         failures += 1;
      }
      
      //  Increment student counter
      student += 1;
   }
   
   //  Termination Phase  //
   //  Display number of passes and failures
   printf("Passed %u\n", passes);
   printf("Failed %u\n", failures);
   
   //  If more than eight students passed, print "Bonus to instructor!"
   if (passes > 8)
   {
      puts("Bonus to instructor!");
   }   
   
   return 0;
}
