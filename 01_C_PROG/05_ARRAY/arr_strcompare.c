#include<stdio.h>

int main()
{
    int i;
    char val[11], ref[] = "Open the door";
    char s;
    printf("\nEnter the string:- ");
    scanf("%s",&val);

    for(i=0; i< (sizeof(val)/sizeof(char));i++)
    {
        while(ref[i] != '\o')
        {
            if(val[i] == ref[i])
            {
                continue;
            }
            else
            {
                printf("Wrong Password");
                break;
            }
        }
    }

    
}