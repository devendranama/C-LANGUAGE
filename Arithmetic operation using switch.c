#include<stdio.h>
int main()
{
 int choice,a,b,sum,sub,multiply, division;
 printf("This is designed by Nikhil Bhardwaj \n");
 printf("Addition \n");
 printf("Subtraction \n");
 printf("Multiply \n");
 printf("Division \n");
 printf("Exit \n");
 
 printf("Enter two number :");
 scanf("%d %d",&a,&b);
 
 printf("Enter your choice");
 scanf("%d",&choice);
 
 switch (choice)
 {
   case 1:
   sum=a+b;
   printf("Sum is %d",sum);
   break;
   
   case 2:
   sub=a-b;
   printf("Sub is %d",sub);
   break;
   
   case 3:
   multiply=a*b;
   printf("Multiply is %d",multiply);
   break;
   
   case 4:
   division=a/b; 
   printf("Division is %d",division);
   break;
   
   case 5:
   exit(0);
  
   default :
   printf("Invalid choice");
   break;
 }
   return 0;
}
