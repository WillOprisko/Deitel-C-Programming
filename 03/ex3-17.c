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

int menu(int);
 
int main(void)
{
   // int state  = 0;
   int choice = 0;
   
   
   // Initiating a system call "clear" immediately after
   // __constructor__generalLedger within main() or menu()
   // results in an fatal-error::
   // malloc: Incorrect checksum for freed object . . . Corrupt value: 0x0
   
   // This error can be avoided by allocating 5 additional block of memory
   // to self->creditCards
   
   // The exact cause and/or reason for the error is uncertain but it appears to
   // be connected with how the program is using and freeing memory in the heap
   
   system("clear");
   generalLedger Master;
   __constructor__generalLedger(&Master);

   do
   {
      choice = menu(choice);
      switch(choice)
      {
         system("clear");
         case 1 :
            createAccount(&Master);
            break;
         case 2 :
            // enterTransaction();
            break;
         case 3 :
            // checkAccountBalance();
            break;
         case 4 :
            // deleteAccount(&Master);
            break;
         default:
            puts("");
            puts("It appears you would like to exit the program.");
            puts("Have a great day!");
      };
   } while (choice >= 1 && choice <= 4);
   
   return 0;
}


//  //
int menu(int choice)
{
   if (choice > 0)
   {
      system("clear");
      puts("Please make another selection:");
   }
   else if (choice <= 0)
   {
      puts("Welcome to the Credit Card Account generator!");
      puts("Please select one of the following options:");
   }
   
   puts("1) Create a New Account");
   puts("2) Enter a Transaction");
   puts("3) Check Account Balance");
   puts("4) Delete an Existing Account");
   puts("5) Exit Program");
   
   printf("%s", ">  ");
   scanf("%d", &choice);
   
   return choice;
}


/*    TEST CODE   //
 printf("%d\n", Master.numberOfAccounts);
 printf("%d\n", Master.creditCards[0].accountNumber);
 
 Master.creditCards[0].accountNumber = 1001;
 printf("%d\n", Master.creditCards[0].accountNumber);
 //    END TEST    */
