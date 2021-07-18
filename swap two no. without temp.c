#include <stdio.h>
int main() 
{
   float a,b;

   printf("enter the num");
   scanf("%f",&a);
      printf("enter the num");
   scanf("%f",&b);

    a=a-b;
    b=a+b;
    a=b-a;
   printf("a=%f", a);
   printf("b=%f",b);
   return 0;
}
