#include<stdio.h>
int main()
{
    int i=1,t,n,m,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&m,&k);
        int p=m-k;
        if(n<=p)
        {
            printf("YES
");
        }
        else if(n>p)
        {
            printf("NO
");
        }
    }
}