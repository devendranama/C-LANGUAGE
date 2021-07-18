#include<stdio.h>
int main()
{
    char n;
    int menu;
    printf("Enter any alphabet:");
    scanf("%c",&n);
    menu =(n=='a' || n=='e' || n=='i' || n=='o' || n=='u');
    if(menu)
    {
    printf("\n%c is a vovel",n);
    }
    else
   {
    printf("\n%c is consonant",n);
    }
    return 0;
}
