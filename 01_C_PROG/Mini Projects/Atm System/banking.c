#include<stdio.h>
void banking(int ch)
{

    register int balance;
    balance = 500000;
    int amt, user_pass, pass = 2400;

    switch(ch)
    {
        case 1:
                printf("Please wait initiating withdraw....");
                printf("\nEnter the amount :- ");
                scanf("%d",&amt);
                printf("\nEnter your Pin :- ");
                scanf("%d",&user_pass);
                if(pass == user_pass)
                {
                    if(balance < amt)
                        {
                            printf("Low Account Balance !!!");
                        }
                    else
                    {
                        balance = balance - amt;
                        printf("'Withdrawl in progress.....\nCollect your cash and card");
                        printf("\nYour current balance is :- %d", balance);
                        printf("\nTransaction Successful!!!");
                    }

                }
                else
                printf("Wrong Pin !!! Transaction Failed !!!");
                break;
        case 2:
                printf("Please wait checking your balance ....");
                printf("\nEnter your password :- ");
                scanf("%d",&user_pass);
                if(user_pass == pass)
                {
                    printf("Your account balance is :- %d ", balance);
                }
                else
                printf("Wrong Pin !!! Transaction Failed !!!");
                break;
        default:
                printf("Invalid Choice !!!! Enter a valid banking option !!!");
    }

}