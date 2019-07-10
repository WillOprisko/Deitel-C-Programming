/*****************************
 * Deitel - C Programming
 * Chapter 2.30
 * "Separating Integer Digits"
 ******************************/

#include <stdio.h>

int main(void)
{
   char c = '\0';
   int n = 0;
   int a[5] = {'\0'};
   
   puts("Please enter a 5-digit non-negative integer.");
   printf("%s", ">>  ");
   scanf("%d", &n);
   
   // Check to make sure the use entered a valid integer
   if (n < 10000 || n > 99999)
   {
      puts("");
      puts("You did not provide a valid number. Try again.");
      
      // Using fflush does not appear to clear the stdin or stdout
      // buffer and out-of-range integers are currently processed
      // by the program after the use enters a valid integer
      n = 0;
      main();
   }
   
   // Not sure how to clear the stdin and stdout buffer
   if (n != 0)
   {
      for (int i = 4; i >= 0; i--)
      {
         a[i] = n % 10;
         n /= 10;
      }
   
      for (int i = 0; i < 5; i++)
      {
         printf("%d%s", a[i], "   ");
      }
      
      puts("");
   }
   
   
   return 0;
}
