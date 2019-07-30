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
   ledgerAccount * creditCard;
   int numberOfAccounts;
} generalLedger;


//  Initialize 'generalLedger'  //
void Ledger__init(generalLedger* self)
{
   self->numberOfAccounts = 0;
}


//  Construct 'generalLedger'  //
generalLedger * Ledger__constructor (void)
{
   generalLedger * newLedger = (generalLedger*) malloc(sizeof(generalLedger));
   Ledger__init(newLedger);
   
   return newLedger;
}
