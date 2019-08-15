/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.34
 * "Palindrome Tester"
 *************************************************/

/*
 -------------------------------------------------------------------------------
 ::  Program Description  ::
 -------------------------------------------------------------------------------
 Write a program that reads in a five-digit integer and determines whether or not
 it’s a palindrome.
 */

#include <stdio.h>

int main(void)
{
   int userInput;
   
   puts("Palindrome Number Tester");
   puts("Enter a five digit integer: ");
   
   if (scanf("%d", &userInput) != 1)
   {
      while (fgetc(stdin) != '\n');
      puts("");
      puts("You did not enter a valid integer.");
   }
   else if ((userInput / 10000) >= 1 && (userInput / 10000) <= 9)
   {
      if (((userInput / 1000) % 10) == ((userInput % 100) / 10) &&
          ((userInput / 1000) / 10) == ((userInput % 100) % 10))
          {
             printf("The number %d IS a palindrome.\n", userInput);
          }
   }
   else
   {
      printf("The number %d is NOT a palindrome.\n", userInput);
   }
   
   
   return 0;
}
