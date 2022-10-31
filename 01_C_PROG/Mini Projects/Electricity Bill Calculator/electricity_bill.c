#include <stdio.h>
#include"electricity.h"
void urban();
void rural();
int main()
{
    int choice;

    top:
    printf("\nEnter your choice of region:- ");
    printf("\n1.Urban\n2.Rural\n");
    scanf("%d",&choice);

    if(choice == 1)
    {
        printf("Welcome to Urban Electricity Board !!!!\n");
        urban();
    }

    else if(choice == 2)
    {
        printf("Welcome to Rural Electricity Board !!!!\n");
        rural();
    }
    else 
    {
        printf("Invalid Choice!!!! Enter a valid region\n");
        goto top;
    }
}