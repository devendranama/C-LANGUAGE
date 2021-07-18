#include<stdio.h>
int main()
{
int i,j;
printf("This is designed by  Bharat Patel\n");
for(i=1; i<=2; i++)
{
  for(j=1; j<=2; j++)
  {
    if(i==j)
    continue;
    
    printf("%d %d\n",i,j);
  }
}
return 0;
}
