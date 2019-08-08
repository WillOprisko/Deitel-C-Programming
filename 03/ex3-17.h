#define INITIAL_ACCOUNTS   5

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
   //  ERROR :: see menu()  //
   self->creditCards = (ledgerAccount *) malloc((INITIAL_ACCOUNTS + 0) * sizeof(ledgerAccount *));
   __init__generalLedger(self);
}



//  Construct 'generalLedger'  //
void createAccount (generalLedger * self)
{
   
}


//  Construct 'generalLedger'  //
void deleteAccount (generalLedger * self)
{
   
}


//  Construct 'generalLedger'  //
void exitProgram (generalLedger * self)
{
   
}
