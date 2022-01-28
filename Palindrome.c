#include<stdio.h>
int main()
{
    int n,reversed=0,Remainder,original;
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        Remainder=n%10;
        reversed=reversed*10+Remainder;
        n/=10;
    }
    if(original==reversed)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}