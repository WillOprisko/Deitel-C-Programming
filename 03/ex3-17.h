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


//    //
int validateTransaction(generalLedger * self)
{
   float userInput;
   
   //    //
   if (scanf("%f", &userInput) != 1)
   {
      pauseProgram();
      return 0;
   }
   else
   {
      return userInput;
   }
}



//    //
int checkAccount(generalLedger * self, int newAccount)
{
   for (int n = 0; n < self->numberOfAccounts; n++)
   {
      if (self->creditCards[n].accountNumber == newAccount)
      {
         printf("Account %d is already on file.\n", newAccount);
         pauseProgram();
         return 0;
      }
   }
   
   return newAccount;
}



//    //
int validateAccount(generalLedger * self)
{
   int userInput;
   
   //    //
   if (scanf("%d", &userInput) != 1)
   {
      //    CLEAR STANDARD INPUT BUFFER   //
      while (fgetc(stdin) != '\n');
      puts("You did not enter a valid account number.");
      pauseProgram();
      return 0;
   }
   else
   {
      userInput = checkAccount(self, userInput);
      return userInput;
   }
}



//    //
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
      puts("You only have one account on file");
      printf("Enter a second account number:  ");
   }
   else if (self->numberOfAccounts <= 0)
   {
      puts("You have no accounts on file");
      printf("Enter a new account number:  ");
   }
   
   
   
   accountNumber = validateAccount(self);
   if (accountNumber > 0)
   {
      self->creditCards[index].accountNumber = accountNumber;
      self->numberOfAccounts++;
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
