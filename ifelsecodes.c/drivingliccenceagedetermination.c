#include<stdio.h>

int main()
{
    int age;
    printf("please enter your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligable for driving licence");
    }
    else{
        printf("you are not eligable for driving licence");
    }
    return 0;

}