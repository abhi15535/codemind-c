#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    if(x<=y)
    {
        printf("0");
    }
    else if(x>y)
    {
        z=x-y;
        printf("%d",z);
    }
}