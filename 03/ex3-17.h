#define INITIAL_ACCOUNTS   5
#define MEMORY_BUFFER      0

//  Child Class -- ledgerAccount  //
typedef struct
{
   int accountNumber;
   float balance;
   int creditLimit;
   float remainingCredit;
} ledgerAccount;


//  Parent Class -- generalLedger  //
typedef struct
{
   ledgerAccount * creditCards;
   int numberOfAccounts;
} generalLedger;

/*******************************************************************************
 *                Index of Class Methods
 ******************************************************************************/

/****************************************************************
 *    Class Constructor and Initializer - 'generalLedger'
 ****************************************************************/
/*1*/    void __init__generalLedger          (generalLedger * self);
/*2*/    void __constructor__generalLedger   (generalLedger * self);


/****************************************************************
 *    Class Constructor and Initializer - 'ledgerAccount'
 ****************************************************************/
/*3*/    void createAccount                  (generalLedger * self);


/****************************************************************
 *    Class Methods - 'generalLedger'
 ****************************************************************/
/*4*/    int   findAccount                   (generalLedger * self);
/*5*/    void  deleteAccount                 (generalLedger * self);
/*6*/    void  displayAccountInformation     (generalLedger * self);

/*7*/    void  enterTransaction              (generalLedger * self);
/*8*/    float validateTransaction           (generalLedger * self);


/****************************************************************
 *    Class Methods - 'ledgerAccount'
 ****************************************************************/
/*8*/    int   validateAccount               (generalLedger * self);
/*9*/    int   checkForDuplicateAccount      (generalLedger * self, int);

/*10*/   int   enterCreditLimit              (generalLedger * self);
/*11*/   float validateNewBalance            (generalLedger * self);

/*12*/   float enterNewBalance               (generalLedger * self);
/*13*/   int   validateCreditLimit           (generalLedger * self);




/*******************************************************************************
 *             Class Method Definitions for 'generalLedger'
 ******************************************************************************/

// Allocates memory in the heap to create a dynamic 'ledgerAccount *' array  //
void __constructor__generalLedger(generalLedger * self)
{
   // Cannot use '.' separator because this method is acting upon a pointer
   self->creditCards = (ledgerAccount *) malloc((INITIAL_ACCOUNTS + MEMORY_BUFFER) * sizeof(ledgerAccount *));
   __init__generalLedger(self);
}


//  Initialize Class variables and array elements to '0'    //
void __init__generalLedger(generalLedger * self)
{
   // Can use the '.' separator because the index value 'n' specifies which
   // array element within the self->'ledgerAccount * creditCards' to use
   for (unsigned int n = 0; n < INITIAL_ACCOUNTS; n++)
   {
      self->creditCards[n].accountNumber   = 0;
      self->creditCards[n].balance         = 0;
      self->creditCards[n].creditLimit     = 0;
      self->creditCards[n].remainingCredit = 0;
   }
   
   self->numberOfAccounts = 0;
}


// Deletes an account already on file   //
void deleteAccount (generalLedger * self)
{
   int currentIndex;
   
   puts("::WARNING:: Deleting an account is permanent ::WARNING::");
   printf("Enter the account number: ");
   currentIndex = findAccount(self);
   if (currentIndex < 0)
   {
      puts("There is no record for this account.");
   }
   else
   {
      // Unsure if the entire 'ledgerAccount *' ADT can be copied from one
      // array element to another.
      
      // This will leave behind artifacts of deleted accounts
      for (int nextIndex = currentIndex + 1; nextIndex < self->numberOfAccounts; nextIndex++)
      {
         self->creditCards[currentIndex].accountNumber   = self->creditCards[nextIndex].accountNumber;
         
         self->creditCards[currentIndex].balance         = self->creditCards[nextIndex].balance;
         
         self->creditCards[currentIndex].creditLimit     = self->creditCards[nextIndex].creditLimit;
         
         self->creditCards[currentIndex].remainingCredit = self->creditCards[nextIndex].remainingCredit;
      }
      
      // Update the total number of credit card accounts
      self->numberOfAccounts--;
   }
   
}

// This Method returns the array index number for the associated
// account number
int findAccount(generalLedger * self)
{
   int userInput;
   if (scanf("%d", &userInput) != 1)
   {
      while (fgetc(stdin) != '\n');       // CLEAR STANDARD INPUT BUFFER //
      return -1;
   }
   else
   {
      for (int n = 0; n < self->numberOfAccounts; n++)
      {
         if (self->creditCards[n].accountNumber == userInput)
         {
            return n;
         }
      }
   }
   
   return -1;
}


// Outputs the contents of 'ledgerAccount *' array element  //
void displayAccountInformation(generalLedger * self)
{
   int index;
   
   printf("Please enter the account number to review:  ");
   index = findAccount(self);
   if (index < 0)
   {
      puts("The account is not on file.");
   }
   else
   {
      printf("Bank Record for Account #%d\n", self->creditCards[index].accountNumber);
      printf("Balance:           %.2f\n", self->creditCards[index].balance);
      printf("Credit Limit:      %d\n", self->creditCards[index].creditLimit);
      printf("Remaining Credit:  %.2f\n", self->creditCards[index].remainingCredit);
   }
}


// Entering a positive number represents a "purchase" and a negative number
// is a "payment"
void enterTransaction (generalLedger * self)
{
   int   index;
   float transactionValue;
   
   printf("Please enter the account number for this transaction:  ");
   index = findAccount(self);
   
   if (index >= 0)
   {
      printf("The current balance on this account is $%.2f\n",
          self->creditCards[index].balance );
      printf("Enter a new transaction for this account:  ");
      
      transactionValue = validateTransaction(self);
      if (transactionValue != 0)
      {
         self->creditCards[index].balance += transactionValue;
         printf("The balance for this account is now $%.2f\n",
                self->creditCards[index].balance );
         
         self->creditCards[index].remainingCredit = self->creditCards[index].creditLimit - self->creditCards[index].balance;
      }
   }
}


// Checks to make sure the user input is a valid float value to prevent
// unintended program behavior
float validateTransaction(generalLedger * self)
{
   float userInput;

   if (scanf("%f", &userInput) != 1)
   {
      while (fgetc(stdin) != '\n');       // CLEAR STANDARD INPUT BUFFER //
      return 0;
   }
   else
   {
      return userInput;
   }
}


/*******************************************************************************
 *             Class Method Definitions for 'ledgerAccount'
 ******************************************************************************/

//       //
int validateAccount(generalLedger * self)
{
   int userInput;
   
   if (scanf("%d", &userInput) != 1)
   {
      while (fgetc(stdin) != '\n');       // CLEAR STANDARD INPUT BUFFER //
      return -1;
   }
   else if (checkForDuplicateAccount(self, userInput) == 0)
   {
      return 0;
   }
   else
   {
      return userInput;
   }
}


//       //
int checkForDuplicateAccount(generalLedger * self, int newAccount)
{
   for (int n = 0; n < self->numberOfAccounts; n++)
   {
      if (self->creditCards[n].accountNumber == newAccount)
      {
         printf("Account %d is already on file.\n", newAccount);
         //pauseProgram();
         return 0;
      }
   }
   
   return newAccount;
}


//       //
float enterNewBalance (generalLedger * self)
{
   float newBalance;
   int   index = self->numberOfAccounts;
   
   printf("Enter the current balance for this account:  ");

   newBalance = validateNewBalance(self);
   if (newBalance > 0)
   {
      return newBalance;
   }
   else
   {
      return -1;
   }
}


//       //
float validateNewBalance(generalLedger * self)
{
   float userInput;
   
   if (scanf("%f", &userInput) != 1)
   {
      while (fgetc(stdin) != '\n');       // CLEAR STANDARD INPUT BUFFER //
      return 0;
   }
   else
   {
      return userInput;
   }
}


//       //
int enterCreditLimit (generalLedger * self)
{
   int  newCreditLimit;
   int  index = self->numberOfAccounts;

   printf("Enter the credit limit for this account:  ");
  
   newCreditLimit = validateCreditLimit(self);
   if (newCreditLimit > 0)
   {
      return newCreditLimit;
   }
   else
   {
      return 0;
   }
}


//       //
int validateCreditLimit(generalLedger * self)
{
   int userInput;
   
   if (scanf("%d", &userInput) != 1)
   {
      while (fgetc(stdin) != '\n');       // CLEAR STANDARD INPUT BUFFER //
      return 0;
   }
   else
   {
      return userInput;
   }
}


//       //
void createAccount (generalLedger * self)
{
   int   newAccountNumber;
   float newBalance;
   int   newCreditLimit;
   int   index = self->numberOfAccounts;
   
   //    //
   if (self->numberOfAccounts > 1)
   {
      printf("You have %d accounts on file.\n", self->numberOfAccounts);
      printf("Enter another account number:  ");
   }
   else if (self->numberOfAccounts == 1)
   {
      puts("You only have one account on file");
      printf("Enter a second account number:  ");
   }
   else if (self->numberOfAccounts <= 0)
   {
      puts("You have no accounts on file");
      printf("Enter a new account number:  ");
   }
   
   
   // Step 1a: Enter a New Account Number //
   newAccountNumber = validateAccount(self);
   if (newAccountNumber > 0)
   {
      // Step 1b: Create Account Number //
      self->creditCards[index].accountNumber = newAccountNumber;
      
      // Step 2a: Enter a New Current Balance //
      newBalance = enterNewBalance(self);
   }
   else if (newAccountNumber < 0)
   {
      puts("Acount number not recognized.");
   }
   
   
   // Step 2b: Link Balance to New Account //
   if (newAccountNumber > 0 && newBalance >= 0)
   {
      self->creditCards[index].balance = newBalance;
      
      // Step 3a: Enter a Credit Limit //
      newCreditLimit = enterCreditLimit(self);
   }
   else if (newAccountNumber > 0 && newBalance <= 0)
   {
      puts("The balance value was not recognized.");
   }
   
   // Step 3b: Link Credit Limit to New Account //
   if (newAccountNumber > 0 && newBalance >= 0 && newCreditLimit > 0)
   {
      self->creditCards[index].creditLimit = newCreditLimit;
      
      // Step 3c: Calculate Remaining Credit Limit //
      self->creditCards[index].remainingCredit = newCreditLimit - newBalance;
      
      // Step 3d: Update Total Number of Credit Card Accounts //
      self->numberOfAccounts++;
   }
   else if (newAccountNumber > 0 && newBalance >= 0 && newCreditLimit <= 0)
   {
      puts("Credit limit value not recognized.");
   }

   
   if (index == self->numberOfAccounts)
   {
      puts("Unable to create a new credit card account.");
   }
}


/*
//    UI/UX Function    //
void pauseProgram(void)
{
   char ch;
   printf("Press [ENTER] to return to the main menu . . .  ");
   
   // Turn-Off Echo to prevent the screen from display typed text //
   system("stty -echo");
   
   // Create a delay for the user the read the screen //
   scanf("%c%*c",&ch);
   // Clear the stdin buffer to prevent undefinied program behavior  //
   while (fgetc(stdin) != '\n');
   
   // Turn-On Echo to allow typed text to be displayed on the screen //
   system("stty echo");
   
}
*/
