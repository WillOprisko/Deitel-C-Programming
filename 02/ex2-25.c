/*****************************
 * Deitel - C Programming
 * Chapter 2.25
 * "Print Initials"
 ******************************/

#include <stdio.h>

void tab(void);

void G_print(int);
void W_print(int);
void O_print(int);



int main(void)
{
   
   for (int n = 1; n <= 6; n++)
   {
      G_print(n);
      W_print(n);
      O_print(n);
      puts("");
   }
   
   return 0;
}


void tab(void)
{
   printf("%s", "    ");
}


void G_print(int n)
{
   switch(n)
   {
      case 1 :
      case 6 :
         printf("%s", "  GGG  ");
         break;
      case 2 :
      case 5 :
         printf("%s", " G   G ");
         break;
      case 3 :
         printf("%s", "G      ");
         break;
      case 4 :
         printf("%s", "G   GGG");
         break;
      default :
         puts("Error with switch value in G_print() function.");
   }
   
   // Creates a 4 Space 'Tab' //
   tab();
}

void W_print(int n)
{
   switch(n)
   {
      case 1 :
      case 6 :
         printf("%s", "W       W");
         break;
      case 2 :
         printf("%s", "W   W   W");
         break;
      case 3 :
         printf("%s", "W  W W  W");
         break;
      case 4 :
         printf("%s", "W W   W W");
         break;
      case 5 :
         printf("%s", "WW     WW");
         break;
      default :
         puts("Error with switch value in W_print function.");
   }
   
   // Creates a 4 Space 'Tab' //
   tab();
}


void O_print(int n)
{
   switch(n)
   {
      case 1 :
      case 6 :
         printf("%s", "  OOOO  ");
         break;
      case 2 :
      case 3 :
      case 4 :
      case 5 :
         printf("%s", "O      O");
         break;
      default :
         puts("Error with switch value in O_print function.");
   }
   
   // Creates a 4 Space 'Tab' //
   tab();
}




/*
   GGG
  G   G
 G
 G   GGG
  G   G
   GGG

   
   
  W       W
  W   W   W
  W  W W  W
  W W   W W
  WW     WW
  W       W

   
   OOOO
 O      O
 O      O
 O      O
 O      O
   OOOO
*/
