
#include <header_files.h>
void balance_check(float balance)
{
     printf("your current balance is: %.2fRs\n",balance);
}
void deposit_amount(float dep,float balance)
{
     if(dep > 0 && dep<=20000)
            {
                printf("\nyour %.2fRs deposited in your account.\n\n",dep);
                balance+=dep;
            }
            else if(dep>20000)
            {
                printf("\nyou can't deposit that much ammount in one time.\n\n");
            }
            else
            {
             printf("\ninvalid deposit amount\n");
            }
}
void withdraw_amount(float draw,float balance)
{
     if(draw<=balance && draw<=20000)
            {
                printf("\nyou just withdraw %.2fRs\n\n",draw);
                balance-=draw;
            }
            else if(draw>20000)
            {
             printf("\nyou can't withdraw that much amount in one time.\n\n");
            }
            else
            {
             printf("\nyou dont have enough money\n\n");
            }
}
void transfer_amount(float transfer,float balance)
{
    if(balance>=transfer)
            {
                printf("\nyour %.2fRs successfully transfered\n\n",transfer);
                balance-=transfer;
            }
            else
            {
                printf("\nyou do not have sufficient balance\n\n");
                
            }
}