#include<stdio.h>

int main()
{
  int spending;
  int earning;
  printf("enter the total spending:");
  scanf("%d",&spending);
  printf("enter total earning:");
  scanf("%d",&earning);
  if(earning-spending<=0)
  {
    printf("there is loss");
  }
  else  
   {
    printf("there are profit");
   }
    return 0;
}