#include<stdio.h>
int main()
{
	int a ,b,c;
	
	printf("enter the desired number\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if ( a>b)
	{
		if(a>c)
		{
		printf("value of a is max\n");}
		else
		{printf("value of c is max\n");
		}
		
	}
	else
{if (b>c)
		{printf("value of b is max\n");
		}
		else{printf("value of c is max\n");
		}
	}
	return 0;
	
}
