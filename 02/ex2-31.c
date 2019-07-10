/*****************************
 * Deitel - C Programming
 * Chapter 2.31
 * "Table of Squares and Cubes"
 ******************************/

#include <stdio.h>

int main(void)
{
   puts("NUMBER\tSQUARE\tCUBE");
   for (int n = 0; n <= 10; n++)
   {
      printf("%d\t%d\t%d\n", n, n*n, n*n*n);
   }
   
   return 0;
}
