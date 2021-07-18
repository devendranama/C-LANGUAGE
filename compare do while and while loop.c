#include<stdio.h>
int main()
{
 int j=0;
 int i=0; 
 printf("You are in while loop");
 while(i<8)
 {
   printf("The values are %d \n",i);
   i++;
 }
 do
 {
  printf("You are in do while loop \n");
  printf("The values are %d \n",j);
  j++;
 }while(j<7);
return 0;
}
