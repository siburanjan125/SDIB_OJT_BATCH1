#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number to be validated:- ");
	scanf("%d",&n);
	
	if(n % 2 == 0)
	{
		printf("%d is a even number.",n);
	}
	else
	{
		printf("%d is a odd number.",n);
	}
}
