/*****************************
* Deitel - C Programming
* Chapter 2.20
* "Diameter, Circumference, and Area"
******************************/

#include <stdio.h>

int main(void)
{
  int   r    = 0;
  float pi   = 3.14159;

  printf("%s", "Please enter a radius: ");
  scanf("%d", &r);

  printf("%s\t%d\n", "Diameter", r * 2);
  printf("%s\t%.2f\n", "Circumference", (2 * pi) * r);
  printf("%s\t\t%.2f\n", "Area", pi * (r*r));
  
  return 0;
}
