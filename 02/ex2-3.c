/*****************************
* Deitel - C Programming
* Chapter 2.3
* "Adding Two Integers"*
******************************/
#include <stdio.h>

// Function main() begins program execution //
int main(void)
{
   int n1  = 0;      // variable to contain the first number entered by the user
   int n2  = 0;      // variable to contain the second number entered by the user
   int sum = 0;      // variable to contain the sum of the n1 and n2
   
   printf("Enter the first integer\n");      // prompt the user to enter number 1
   scanf("%d", &n1);                         // stores the value in n1
   
   printf("Enter the second integer\n");     // prompt the user to enter number 2
   scanf("%d", &n2);                         // stores the value in n2
   
   sum = n1 + n2;    // assigns the value of the sum of n1 and n2
   
   printf("The sum is %d\n", sum);           // prints the value stored in sum
   
   return 0;
}  // End function main() //
