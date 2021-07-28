#include<stdio.h>
int main()
{
int num;
int choice;
printf("Enter any number");
scanf("%d",&num);
 
switch (num)
{
  case 1:
  printf("You are in case 1");
  break;
  
  case 2:
  printf("You are in case 2");
  break;
  
  case 3:
  printf("You are in case 3");
  break;
  
  default:
  printf("You are in default");
  break;
}
return 0;
}
