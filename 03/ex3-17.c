/*************************************************
 * Deitel - C Programming
 * Chapter 3 -- Exercise 3.17
 * "Gas Mileage"
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
         A. Create a new credit card account (Limit 10)
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
            'createAccount'
            'deleteAccount'
            'exit'
 
 
      Class Methods - 'ledgerAccount'
            'enterTransaction'
            'checkBalance'
 
      Class Method Declarations - 'generalLedger'
            generalLedger * Ledger__constructor (void);
            void Ledger__init(generalLedger* self);
            void createAccount (struct generalLedger.(ledgerAccount *));
            void deleteAccount (struct generalLedger.(ledgerAccount *));
            void exit (struct ledgerAccount *);
 
 
      Class Method Definition - 'Ledger__constructor'
            generalLedger * Ledger__constructor (void)
            {
               generalLedger * newLedger = (generalLedger*) malloc(sizeof(generalLedger);
               Ledger__init(newLedger);
 
               return newLedger;
            }
 
 
      Class Method Definition - 'Ledger__init'
            void Ledger__init(generalLedger* self)
            {
               self->numberOfAccounts = 0;
            }
 
 
      Class Method Definition - 'createAccount'
            void createAccount (struct generalLedger.(ledgerAccount *))
            {
 
            }
 
 
      Class Method Definition - 'deleteAccount'
            void deleteAccount (struct generalLedger.(ledgerAccount *))
            {
 
            }
 
 
      Class Method Definition - 'exit'
            void exit (struct ledgerAccount *)
            {
 
            }
 
 //  Intialization Phase  //
 
 
 // Processing Phase //

 
 
 // Termination Phase //

 
 Exit Program
 */
#include <stdio.h>
#include <stdlib.h>
#include "ex3-17.h"

/*
//  'ledgerAccount'  //
typedef struct
{
   int accountNumber;
   int balance;
   int creditLimit;
   int remainingCredit;
} ledgerAccount;


//  'generalLedger'  //
typedef struct
{
   struct ledgerAccount * creditCard;
   int numberOfAccounts;
} generalLedger;


//  Initialize 'generalLedger'  //
void Ledger__init(struct generalLedger* self)
{
   self->numberOfAccounts = 0;
}


//  Construct 'generalLedger'  //
struct generalLedger * Ledger__constructor (void)
{
   struct generalLedger * newLedger = (struct generalLedger*) malloc(sizeof(struct generalLedger));
      Ledger__init(newLedger);
                                                       
   return newLedger;
}
*/

int main(void)
{
   generalLedger * Ledger = Ledger__constructor();
   Ledger->numberOfAccounts = 12;
   
   printf("%d\n", Ledger->numberOfAccounts);
   
   return 0;
}
