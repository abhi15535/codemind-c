#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    float avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        avg=sum/n;
    }
    printf("%.2f",avg);
}