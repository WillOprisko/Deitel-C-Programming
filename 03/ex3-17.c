/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.17
 * "Credit Card Account"
 *************************************************/

/*
 -------------------------------------------------------------------------------
               ::  Program Description  ::
 -------------------------------------------------------------------------------
   Determine if a department store customer has exceeded the credit limit on a
   charge account.
 
 -------------------------------------------------------------------------------
               ::  Program Outline  ::
 -------------------------------------------------------------------------------
   I.    Display a "Menu" with the following options:
         A. Create a new credit card account
         B. Enter  a new charge or payment on an existing account
         C. Check  the balance on all your accounts
         D. Exit
   II.   User input
         A. Create new account:
            1. Account number
            2. Current account balance
            3. Total credit limit
         B. Enter new charge or payment:
            1. Account number
               a) Charge Amount
               b) Payment Amount
         C. Check balance:
            1. No input required
         D. Exit:
   III.  Display results:
         A. Create new account:
            1. Account number
            2. Current balance
            3. Remaining credit
         B. Enter new charge or payment:
            1. Account number
               a) Charge Amount
               b) Payment Amount
         C. Check balance:
            1. Account number
            2. Credit Limit
            3. Current Balance
            4. Remaining credit
               a) Warning Message; if limit exceeded
         D. Exit:
 
   IV.   When comparing updated balance to account credit limit
         A. If the credit limit IS exceeded:
            1. Display the following information:
               a) account number
               b) credit limit
               c) new balance
               d) Message “Credit limit exceeded.”
         B. If the credit limit is NOT exceed:
            1. Display remaining credit
 
 -------------------------------------------------------------------------------
               ::  Pseudocode Structure  ::
 -------------------------------------------------------------------------------


 //  Create account.h file  //
 
      Class Types
            'generalLedger'
            'ledgerAccount'
 
      Class Definitions
            struct 'generalLedger'
               struct ledgerAccount * creditCard;
               short int numberOfAccounts;
 
            struct 'ledgerAccount'
               int accountNumber;
               int balance;
               int creditLimit;
               int remainingCredit;
 
      Class Methods - 'generalLedger'
            'Ledger__init'
            'Ledger__constructor'
            'createAccount'
            'deleteAccount'
            'exit'
 
 
      Class Methods - 'ledgerAccount'
            'enterTransaction'
            'checkBalance'
 
      Class Method Declarations - 'generalLedger'
            void __constructor__generalLedger   (generalLedger *self);
            void __init__generalLedger          (generalLedger *self);
            void createAccount                  (generalLedger *self);
            void deleteAccount                  (generalLedger *self);
            void exit                           (generalLedger *self);

 
 //  Intialization Phase  //
 
 
 // Processing Phase //

 
 
 // Termination Phase //

 
 Exit Program
 */
#include <stdio.h>
#include <stdlib.h>
#include "ex3-17.h"
/*
#define IN        1
#define OUT       0
#define DEFAULT   0
*/


void menu(int state);

 
int main(void)
{
  
   
   generalLedger Master;
   __constructor__generalLedger(&Master);



   int state  = 0;
   int choice = 0;
   do
   {
      menu(state);
      switch(choice)
      {
         case 1 :
            state = 1;
            break;
         case 2 :
            break;
         case 3 :
            break;
         case 4 :
            break;
         default:
            puts("");
            puts("It appears you would like to exit the program.");
            puts("Have a great day!");
            state = 0;
         
      };
   } while (state == 1);


   
   
   
   return 0;
}

/*    Incorrect checksum for freed object 0x7fa7b5402a28: probably modified
      after being freed.
 
      Corrupt value: 0x0
 
      ex3-17(4092,0x1113265c0) malloc: *** set a breakpoint in
      malloc_error_break to debug
 
      Abort trap: 6
 
      //  Appears to be an instance of writing beyond the allocated memory  //
      //    Fixed when allocating more memory to self->creditCards
      //    (see void __constructor__generalLedger)
*/
void menu(int state)
{
   int choice = 0;
   
   system("clear");
   if (state == 1)
   {
      puts("Please make another selection:");
   }
   else if (state == 0)
   {
      puts("Welcome to the Credit Card Account generator!");
      puts("Please select one of the following options:");
   }
   
   puts("1) Create a New Account");
   puts("2) Enter a Transaction");
   puts("3) Check Account Balance");
   puts("4) Delete an Existing Account");
   puts("5) Exit Program");
   
   //return choice;
}


/*    TEST CODE   //
 printf("%d\n", Master.numberOfAccounts);
 printf("%d\n", Master.creditCards[0].accountNumber);
 
 Master.creditCards[0].accountNumber = 1001;
 printf("%d\n", Master.creditCards[0].accountNumber);
 //    END TEST    */
