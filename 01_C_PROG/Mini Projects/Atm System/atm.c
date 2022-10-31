#include<stdio.h>
#include"banking.h"
void banking(int);
int main()
{
    printf("Welcome to PHYTEC ATM !!!");
    int ch,amt;
    int pass = 2400, user_pass;
    top:
    printf("\nChoose an Option no :-\n1.Cash Withdral\n2.Balance Enquiry\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
                banking(ch);
                break;
        case 2:
                banking(ch);
                break;
        default:
                printf("\nInvalid Banking Choice !!! Enter a valid choice");
                goto top;
    }

}