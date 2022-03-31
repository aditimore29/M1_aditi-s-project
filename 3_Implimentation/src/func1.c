
#include"ATM_management.h"
float deposite(float balance)
{
    system("cls");
    int c;
    float deposite;
    printf("\n How much amount you want to deposite ");
    scanf("%f",&deposite);
    balance+=deposite;

    printf("*******DEPOSITED SUCCESSFULLY*******");
    delay(1);
    system("cls");
    printf("\n Do you want to check balance??\n");
    printf("\n 1.YES\n");
    printf("\n 2.NO\n");
    scanf("%d",&c);
    if(c==1)
      checkbalance(balance);
    else if(c==2)
       Exit();
      return balance;

}
float withdraw(float balance,float min)
{
    system("cls");
    int c;
    float withdraw;
    printf("\n How much amount you want to withdraw ");
    scanf("%f",&withdraw);
    if(withdraw>balance || withdraw>=min)
    {
        printf("\n INSUFFICIENT BALANCE");
        delay(1);
    }
    else if((balance-withdraw)==300 || (balance-withdraw)<=300)
    {
      system("cls");
      printf("\n your balance must be greater than 300");
      delay(1);
    }
    else
    {
      
    balance-=withdraw;
    printf("*******DEBITED SUCCESSFULLY*******");
    delay(1);
    }
    system("cls");
    printf("\n Do you want to check balance??\n");
    printf("\n 1.YES\n");
    printf("\n 2.NO\n");
    scanf("%d",&c);
    if(c==1)
      checkbalance(balance);
    else if(c==2)
       Exit();
       return balance;
}