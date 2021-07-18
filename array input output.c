#include<stdio.h>
int main()
{
 int i;
 int num[10];
 printf("This is designed by Bharat Patel\n");
 printf("Enter the value \n");
 for(i=0; i<10; i++)
 {
 
   scanf("%d\n",&num[i]);
   
 }
  
 printf("The values in the array are :");
 for(i=0; i<10; i++)
 {
  printf(" %d ",num[i]); 
 }
 return 0;
}
