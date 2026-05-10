//To see that if we put any non zero in if else condition it will give run that code no matter what condition
#include<stdio.h>

int main()
{
    int a=5;
    if(1){
        printf("hello\n");
    }
    if(a=3)
    {
        printf("hello again");
    }
    return 0;
    
    
}