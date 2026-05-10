#include<stdio.h>

int main()
{
    int x;
    int n;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of n:");
    scanf("%d",&n);
    if(x%n==0)
    {
        printf("number is dividble by n");
    
    }
    
    else
    {
        printf(" number is not divisble by n");

    }
     return 0;
}