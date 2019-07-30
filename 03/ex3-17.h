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
void Ledger__init(generalLedger* self)
{
   self->numberOfAccounts = 0;
}


//  Construct 'generalLedger'  //
generalLedger * Ledger__constructor(void)
{
   generalLedger * newLedger = (generalLedger*) malloc(sizeof(generalLedger));
   Ledger__init(newLedger);
   
   return newLedger;
}


//  Construct 'generalLedger'  //
void createAccount (generalLedger * self)
{
   
   unsigned long * temp = 0;
   temp = realloc(self->creditCards, sizeof(*(self->creditCards)) * 1);
   //self->creditCards = realloc(self->creditCards, sizeof(*(self->creditCards)) * 1);
   
   
   if (temp)
   {
      self->creditCards = temp;
      self->numberOfAccount += 1;
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
