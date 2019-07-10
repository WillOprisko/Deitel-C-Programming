/*****************************
 * Deitel - C Programming
 * Chapter 2.29
 * "Integer Value of a Character"
 ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void)
{
   int  n =   1;
   char c = '\0';
   
   // Set the random generator to produce starting point based upon
   // the local time of the computer
   srand(time(0)/2);
   while (n <= 10)
   {
      // ASCII characters 32-176 are printable
      c = rand() % 177;
      
      // Control the program to print 10 ASCII characters
      // and the associated decimal value
      if (isprint(c))
      {
         printf("%d\t%c\n", c, c);
         n++;
      }
   }
   
   return 0;
}

