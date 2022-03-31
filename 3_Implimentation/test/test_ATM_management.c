#include"unity.h"
#include"ATM_management.h"

extern void test_ATM_management(void);
void setUp(void){}
void tearDown(void){}
int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(test_ATM_management);
   return (UnityEnd());
}
void test_ATM_management()
{
    int choice;
    do{ 
        system("cls");
        printf("\n *******WELCOME*******");
        printf("\n CHOOSE ANY ONE OPTION HERE");
        printf("\n 1.GENERATE PIN");
        printf("\n 2.ENTER PIN for further transactions");
        printf("\n 3.EXIT\n");
        scanf("%d",&choice);
        if(choice==1){ system("cls");
                    generate_pin();
                   break;}
        else if(choice==2){ system("cls");
                    enter_pin();
                    break;}
        else if(choice==3){ Exit();break;}
        else {printf("\n INVALID CHOICE");}
        
    }while(choice!=3);
    
}