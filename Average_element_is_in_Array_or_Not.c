#include<stdio.h>
int main()
{
    int i,sum=0,n,avg,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
        avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            c=1;
            break;
        }
        else
        {
            c=0;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}