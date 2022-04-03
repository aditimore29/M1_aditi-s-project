#include"ATM_management.h"
extern void test_ATM_management();
float balance=300.00,min=300;
void checkbalance(float balance)
{
    system("cls");
    
    printf("\n BALANCE:-%.2f",balance);
    delay(1);
    test_ATM_management();

}
void generate_pin() 
{
        FILE *fp;
        int pin;
    fp=fopen("pin.txt","a");
    printf("\n Enter your 4 digit new pin");
    scanf("%d",&pin);
    if (NULL == fp) {
        printf("\nCannot open file!");
        exit(1);
    }
    /*
      Write PIN to the file
    */else{
    fprintf(fp, "%d\n", pin);
    fclose(fp);
    printf("\nPIN generated successfully\n");
    delay(1);
    }
    test_ATM_management();
} 
void enter_pin(void)
{
    FILE *fp;
    //  read PIN and store from file
    char pin[8];
    //  read PIN and store from user
    char sPin[8];
    int Valid = 0,s;
    printf("\n\nEnter the PIN: \n");
    scanf("%s",&sPin);

    fp = fopen("pin.txt", "r");
    if (NULL == fp) {
        printf("\nFile cannot be opened\n");
        exit(1);
    }

    /*
      Search for the PIN entered by user in file pin.txt
    */
    while (fgets(pin, sizeof(pin), fp) != NULL) {
        if (strstr(pin, sPin)) {
            Valid = 1;
        }
    }
    fclose(fp);
    if(Valid==1)
    {
        do{
            system("cls");
            printf("\n SELECT ONE OF FOLLOWING");
            printf("\n 1. DEPOSITE");
            printf("\n 2. WITHDRAW");
            printf("\n 3.CHECK BALANCE");
            printf("\n 4.GO BACK!!!");
            scanf("%d",&s);
            switch (s)
            {
            case 1:balance=deposite(balance); //call deposite function which is present in func1.c file
                break;
            case 2:
                balance=withdraw(balance,min);//call withdraw function which is present in func1.c file
                break;
            case 3:
                checkbalance(balance);
            case 4:test_ATM_management();
                break;
            default:printf("\n INVALID CHOICE");
                break;
            }getch();

        }while(4!=3);

    }
    else{
        printf("\n INVALID PIN");
        delay(1);
        test_ATM_management();
    }
}
void Exit()
{
    system("cls");
    printf("--------------TAKE YOUR RECEIPT!!!------------------\n");
    printf("--------------THANK YOU ----------------------------\n");
   delay(1);
   
   
}