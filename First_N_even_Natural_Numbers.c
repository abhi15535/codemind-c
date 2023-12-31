#include<stdio.h>
int main()
{
    int n,i=0,s=0;
    scanf("%d",&n);
    for(i=n;i!=0;i--)
    {
        s=i*2;
        printf("%d ",s);
    }
}