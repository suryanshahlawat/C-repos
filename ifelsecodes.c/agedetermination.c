#include<stdio.h>

int main()
{
    
    int age;
    printf("please enter your age:");
    scanf("%d",&age);

    if(age<=12)
    {
        printf("you are children");
    }
    else if(18>=age)
    {
        printf("you are teenager");
    
    }
    else if(age<60)
    {
        printf("you are an adult");
    }
    else 
    {
        printf(" you are a seniour citizen");
    }
    
        

    return 0;

}
