/*****************************
 * Deitel - C Programming
 * Chapter 2.23
 * "Largest and Smallest Integers"
 ******************************/

#include <stdio.h>

void  largestNumber(int, int, int);
void smallestNumber(int, int, int);

int main(void)
{
   unsigned int n1 = 0;
   unsigned int n2 = 0;
   unsigned int n3 = 0;
   
   puts("Please enter three non-negative integers.");
   
   printf("%s", "First:\t");
   scanf("%d", &n1);
   
   printf("%s", "Second:\t");
   scanf("%d", &n2);
   
   printf("%s", "Third:\t");
   scanf("%d", &n3);
   
   
   
    largestNumber(n1, n2, n3);
   smallestNumber(n1, n2, n3);
   
   return 0;
}

void largestNumber(int n1, int n2, int n3)
{
   if (n1 > n2 && n1 > n3)
   {
      printf("%s%d\n", "Largest:   ", n1);
   }
   else if (n2 > n1 && n2 > n3)
   {
      printf("%s%d\n", "Largest:   ", n2);
   }
   else if (n3 > n1 && n3 > n2)
   {
      printf("%s%d\n", "Largest:   ", n3);
   }
}


void smallestNumber(int n1, int n2, int n3)
{
   if (n1 < n2 && n1 < n3)
   {
      printf("%s%d\n", "Smallest:  ", n1);
   }
   else if (n2 < n1 && n2 < n3)
   {
      printf("%s%d\n", "Smallest:  ", n2);
   }
   else if (n3 < n1 && n3 < n2)
   {
      printf("%s%d\n", "Smallest:  ", n3);
   }
}
