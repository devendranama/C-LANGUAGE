#include<stdio.h>
int main()
{
	int a,b,c;
	a=10;
	b=2;
	c=5;
	
	a+=b;
	printf("value of a =%d\n",a);
	
	c+=a;
	printf("value of c =%d\n",c);
	
	a-=b;
		printf("value of a =%d\n",a);
		
		c-=b;
			printf("value of a =%d\n",c);
			
			b*=c;
				printf("value of a =%d\n",b);
				
				c*=a;
					printf("value of a =%d\n",c);
					 a/=b;
					 	printf("value of a =%d\n",a);
					 	
					 	c/=b;
					 		printf("value of a =%d\n",c);
					 		
					 		a%=c;
					 			printf("value of a =%d\n",a);
					 			
					 			c%=b;
					 				printf("value of a =%d\n",c);
	
	
			

			
		return 0 ;
	
}
