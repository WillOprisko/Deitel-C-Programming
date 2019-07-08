//
//  ex2-19.c
//  
//
//  Created by Admin on 7/4/19.
//

#include <stdio.h>

int main(void)
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    
    printf("Please enter three integers.\n");
    printf("First number:  ");
    scanf("%d", &n1);
    printf("Second number: ");
    scanf("%d", &n2);
    printf("Third number:  ");
    scanf("%d", &n3);
    
    printf("Sum is      %d\n", n1 + n2 + n3);
    printf("Average is  %d\n", (n1 + n2 + n3) /3 );
    printf("Product is  %d\n", n1 * n2 * n3);
    
    if (n1 < n2 && n1 < n3)
        printf("Smallest is %d\n", n1);
    
    if (n2 < n1 && n2 < n3)
        printf("Smallest is %d\n", n2);
    
    if (n3 < n1 && n3 < n2)
        printf("Smallest is %d\n", n3);
    
    
    if (n1 > n2 && n1 > n3)
        printf("Largest is  %d\n", n1);
    
    if (n2 > n1 && n2 > n3)
        printf("Largest is  %d\n", n2);
    
    if (n3 > n1 && n3 > n2)
        printf("Largest is  %d\n", n3);
    
    return 0;
}
