#include<stdio.h>
int result;
int add(int x, int y)
{
    result = x + y;
}

void disp()
{
    printf("\nResult in from disp() file :- %d\n",result);
}