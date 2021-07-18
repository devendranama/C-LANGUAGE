#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter the first number\n ");
	scanf("%d",&a);	
	
	printf("enter the second number\n ");
	scanf("%d",&b);
	
	
	
	printf("(a==b)&&(a!=b)=%d\n",(a==b)&&(a!=b));
		printf("(a==b)&&(a>b)=%d\n",(a==b)&&(a>b));
			printf("(a>=b)&&(a>b)=%d\n",(a>=b)&&(a>b));
				printf("(a<=b)&&(a<b)=%d\n",(a<=b)&&(a<b));
				
				
					printf("(a==b)||(a!=b)=%d\n",(a==b)||(a!=b));
		printf("(a==b)||(a>b)=%d\n",(a==b)||(a>b));
			printf("(a>=b)||(a>b)=%d\n",(a>=b)||(a>b));
				printf("(a<=b)||(a<b)=%d\n",(a<=b)||(a<b));
				
					printf("!(a!=b)=%d\n",!(a!=b));
		printf("!(a>b)=%d\n",!(a>b));
			printf("!(a>=b)=%d\n",!(a>=b));
				printf("!(a<b)=%d\n",!(a<b));

	
	
			

			
		return 0 ;
	
}
