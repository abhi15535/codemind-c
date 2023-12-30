#include<stdio.h>
int main()
{
    int  n,i,rev=0,r;
    scanf("%d",&n);
    r=n;
    while(n!=0)
    {
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
    if(r==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}