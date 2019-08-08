#define INITIAL_ACCOUNTS   5
#define MEMORY_BUFFER      0

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
   ledgerAccount * creditCards;
   int numberOfAccounts;
} generalLedger;



//  Initialize Class variables and array elements to '0'     //
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



//  Allocate memory in the heap to create a dynamic 'ledgerAccount *' array  //
void __constructor__generalLedger(generalLedger * self)
{
   // Cannot use '.' separator because this method is acting upon a pointer
   self->creditCards = (ledgerAccount *) malloc((INITIAL_ACCOUNTS + MEMORY_BUFFER) * sizeof(ledgerAccount *));
   __init__generalLedger(self);
}


int validateAccount(generalLedger * self, int accountNumber)
{
   
   return 0;
}


//  Construct 'generalLedger'  //
void createAccount (generalLedger * self)
{
   int  accountNumber;
   int  index = self->numberOfAccounts;
   
   
   //    //
   if (self->numberOfAccounts > 1)
   {
      printf("You have %d accounts on file.\n", self->numberOfAccounts);
      printf("Enter another account number:  ");
   }
   else if (self->numberOfAccounts == 1)
   {
      puts("You onyl have one account on file");
      printf("Enter a second account number:  ");
      
   }
   else if (self->numberOfAccounts <= 0)
   {
      puts("You have no accounts on file");
      printf("Enter a new account number:  ");
   }
   
   
   //    //
   if (scanf("%d", &accountNumber) == 1)
   {
      self->creditCards[index].accountNumber = validateAccount(self, accountNumber);
   }
   else
   {
      fflush(stdin);
      puts("You did not enter a valid account number.");
      puts("Returning the the main menu");
   }
}


//  Construct 'generalLedger'  //
void deleteAccount (generalLedger * self)
{
   
}


//  Construct 'generalLedger'  //
void exitProgram (generalLedger * self)
{
   
}
