#include <stdio.h>

int main(void)
{
   for (int n = 1; n <= 1000000000; n++)
   {
      if ((n % 100000000) == 0)
         printf("%d\n", n);
   }
   
   return 0;
}
