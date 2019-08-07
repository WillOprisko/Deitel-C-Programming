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
void Ledger__init(generalLedger * self)
{
   self->creditCards = (ledgerAccount *) malloc(10 * sizeof(ledgerAccount *));
   self->numberOfAccounts = 0; // what about:  self.numberOfAccounts
}


//  Construct 'generalLedger'  //
generalLedger * Ledger__constructor(void)
{
   generalLedger * newLedger = (generalLedger*) malloc(sizeof(generalLedger*));
   Ledger__init(newLedger);
   
   return newLedger;
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
