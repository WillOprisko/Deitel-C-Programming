/*****************************
 * Deitel - C Programming
 * Chapter 2.18
 * "Comparing Two Integers"*
 ******************************/

#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    
    
    printf("Please enter two integers and I will compare them.\n");
    printf("First number:  ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    
    if (num1 == num2)
        printf("These numbers are equal.\n");
    
    if (num1 > num2)
        printf("%d is larger.\n", num1);
    
    if (num1 < num2)
        printf("%d is larger.\n", num2);
    
    return 0;
}
