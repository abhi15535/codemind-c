#include<stdio.h>
int main()
{
    int i,fact=1,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d ",fact);
}