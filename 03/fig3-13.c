/*************************************************
 * Deitel - C Programming
 * Chapter 3.11 -- Figure 3.13
 * "Increment and Decrement Operators"
 *************************************************/

#include <stdio.h>

int main(void)
{
   int c = 0;
   
   //  Demonstrate Postincrement  //
   c = 5;
   printf("%d\n", c);      //  print 5
   printf("%d\n", c++);    //  print 5, then increase c to 6
   printf("%d\n", c);      //  print 6
   
   puts("");
   
   //  Demonstrate Preincrement  //
   c = 5;
   printf("%d\n", c);      //  print 5
   printf("%d\n", ++c);    //  increase c to 6, then print 6
   printf("%d\n", c);      //  print 6
   
   return 0;
}
