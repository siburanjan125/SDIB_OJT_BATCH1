#include<stdio.h>

int main()
{
    float p,c,m,avg;
	printf("Enter the marks of the subjects:-\n");
    printf("Enter Marks in physics:-\n");
	scanf("%f",&p);
    printf("\nEnter Marks in Chemistry:-\n");
	scanf("%f",&c);
    printf("\nEnter Marks in Maths:-\n");
	scanf("%f",&m);

    if(p >= 35 && c >= 35 && m >=35)
    {
	    if(avg >= 75)
	    {
		    printf("You passed with Distinction!!! Promoted to next standard!!!\n");
            
        
	    }
	    else if(avg >= 65)
	    {
		    printf("You passed with First Class!!! Promoted to next standard!!!\n");
        
	    }
	    else if(avg>=55)
	    {
		    printf("You passed with Second Class!!! Promoted to next standard!!!\n");
        
	    }
	    else if(avg >= 45)
	    {
		    printf("You just passed!!! Promoted to next standard!!!\n");
        
	    }
    }
    else if(p < 35 && c < 35 && m < 35 || p < 35 && c < 35 && m >= 35 || p < 35 && c >= 35 && m < 35 || p >= 35 && c < 35 && m < 35 )
    {
        printf("Sorry ,You cannot be promoted !!! Contact the Administration!!!");
    }
    else if(p < 35 && c >= 35 && m >= 35)
    {
        printf("Sorry ,You Failed in physics !!! Apply for supplementary !!!");
    }
    else if(p >= 35 && c < 35 && m >= 35)
    {
        printf("Sorry ,You Failed in Chemistry !!! Apply for supplementary !!!");
    }
    else if(p >= 35 && c >= 35 && m < 35)
    {
        printf("Sorry ,You Failed in Maths !!! Apply for supplementary !!!");
    }
	
}