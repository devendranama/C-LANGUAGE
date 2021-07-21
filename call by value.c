#include <stdio.h>
void add( int i, int j );
int main()
{int i;
  i=10;
int j;
 j= 20;
 add(i,j);
 printf("the curent value of i is %d\n",i);
 return 0;
 }

void add( int i, int j )
{
	int k=i+j;
	printf("the addition of two variables is %d \n",k);
	i=11;
	j=22;
	k=i+j;
	printf("the addition of two variables is %d \n",k);
}
