#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    unsigned int n = 1;
    unsigned int r = 0;
    
    // -- Creates a random number based upon the local time -- //
    srand(time(0));
    while (r == 0)
    {
        // -- MOD 101 keeps the number between 0 and 100 -- //
        r = rand() % 101;
    }
    
    
    printf("Welcome to the Guess Number program!\n");
    printf("Please enter a number between 1 and 1000.\n");
    //printf("%u\n",r);
    
    
    // -- Program will break if user enters a letter or symbol -- //
    while (n != r)
    {
        printf("Guess?\t");
        scanf("%u", &n);
        if(n > r)
            printf("\033[0;31mToo high.\033[0m\n");     // Red Bold Text
        else if (n < r)
            printf("\033[1;36mToo low. \033[0m\n");     // Blue Bold Text
    }    
    
    return 0;
}
