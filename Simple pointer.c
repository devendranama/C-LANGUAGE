#include<stdio.h>
int main()
{
 int i=8;
 int *j;
 printf("This is designed by  Bharat Patel\n");
 j=&i;
 
 printf("Value of i is %d \n",i);
 printf("Value of if() is %d\n",*(&i));
 printf("Value of i is %d\n",*j);
 printf("Value of j is %d\n",j);
 printf("Address of i is %p\n",&i);
 printf("Address of i is %p\n",j);
 printf("Address of j is %p\n",&j);
 return 0;
}
