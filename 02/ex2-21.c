/*****************************
 * Deitel - C Programming
 * Chapter 2.21
 * "Shapes with Asterisks"
 ******************************/

#include <stdio.h>

void square  (int n);
void circle  (int n);
void arrow   (int n);
void diamond (int n);


int main(void)
{
   for (int n = 1; n <=9; n++)
   {
      square(n);
      circle(n);
      arrow(n);
      diamond(n);
      printf("%s", "\n");
   }
   
   return 0;
}


void square (int n)
{
   switch(n)
   {
      case 1 :
         printf("%s\t", "*********");
         break;
      case 9 :
         printf("%s\t", "*********");
         break;
      default :
         printf("%s\t", "*       *");
   }
}


void circle (int n)
{
   switch(n)
   {
      case 1 :
         printf("%s\t", "   ***   ");
         break;
      case 2 :
         printf("%s\t", " *     * ");
         break;
      case 8 :
         printf("%s\t", " *     * ");
         break;
      case 9 :
         printf("%s\t", "   ***   ");
         break;
      default :
         printf("%s\t", "*       *");
   }
}


void arrow (int n)
{
   switch(n)
   {
      case 2 :
         printf("%s\t  ", " *** ");
         break;
      case 3 :
         printf("%s\t  ", "*****");
         break;
      default :
         printf("%s\t  ", "  *  ");
   }
}


void diamond(int n)
{
   if      (n == 1 || n == 9)
   {
      printf("%s\t", "    *    ");
   }
   else if (n == 2 || n == 8)
   {
      printf("%s\t", "   * *   ");
   }
   else if (n == 3 || n == 7)
   {
      printf("%s\t", "  *   *  ");
   }
   else if (n == 4 || n == 6)
   {
      printf("%s\t", " *     * ");
   }
   else if (n == 5)
   {
      printf("%s\t", "*       *");
   }
}

