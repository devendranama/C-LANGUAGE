#include<stdio.h>
int main()
{
 int i,k;
 int j=1;
 printf("This is designed by  Bharat patel \n");
 printf("Enter any integer:");    
 scanf("%d",&i);
 
 
 while(j<3)
 {
  k=i>>j;
  printf("\n The value after right shifting is %d",k);
  j++;
 }
 return 0;
}
