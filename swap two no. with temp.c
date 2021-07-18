#include <stdio.h>
int main() 
{
   float a,b,temp ;
   
   printf("enter the num");
   scanf("%f%f",&a,&b);
    
    temp=a;
    a=b;
    b=temp;
   printf("a=%f", a);
   printf("b=%f",b);
   return 0;
}
