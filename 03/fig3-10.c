/*************************************************
 * Deitel - C Programming
 * Chapter 3.9 -- Figure 3.8
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
