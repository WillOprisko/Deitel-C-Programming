/*****************************
 * Deitel - C Programming
 * Chapter 2.16
 * Arithmetic Operators
 * "obtain two numbers from the user and print the them fromds the user and prints
 *  sum, product, difference, quotient and remainder"
 ******************************/

#include <stdio.h>


//  Function main() begins program execution  //
int main(void)
{
   int num1 = 0;     // variable for the first  number entered by the user
   int num2 = 0;     // variable for the second number entered by the user
   
   printf("Please enter two integers.\n");
   
   printf("first number: \n");
   scanf("%d", &num1);                 // obtain and assign the first integer
   
   printf("second number: \n");
   scanf("%d", &num2);                 // obtain and assign the second integer
   
   printf("%d + %d = %d\n", num1, num2, num1 + num2);
   printf("%d * %d = %d\n", num1, num2, num1 * num2);
   printf("%d - %d = %d\n", num1, num2, num1 - num2);
   printf("%d / %d = %d\n", num1, num2, num1 / num2);
   printf("%d %% %d = %d\n", num1, num2, num1 % num2);
   
   return 0;
}  // End function main() //
