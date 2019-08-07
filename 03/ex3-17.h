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



//  Initialize 'generalLedger'  //
void __init__generalLedger(generalLedger * self)
{
   // Can use the '.' separator because the index value 'n' specifies the
   // array element within the self->'ledgerAccount * creditCards'
   // that is being used.
   for (unsigned int n = 0; n < 10; n++)
   {
      self->creditCards[n].accountNumber   = 0;
      self->creditCards[n].balance         = 0;
      self->creditCards[n].creditLimit     = 0;
      self->creditCards[n].remainingCredit = 0;
   }
   
   self->numberOfAccounts = 0;
}



//  Construct 'generalLedger'  //
void __constructor__generalLedger(generalLedger * self)
{
   // Cannot use '.' separator because this method is acting upon a pointer
   // Allocating memory in the heap to create a dynamic array
   self->creditCards = (ledgerAccount *) malloc(10 * sizeof(ledgerAccount *));
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
