#include<stdio.h>

int add(int,int);

int main()
{
    int a=10,b= 20,c;
    c = add(a,b);
    printf("The sum of %d and %d is :- %d",a,b,c);

}

int add(a,b)
{
    int c = a+b;
    return c;
}