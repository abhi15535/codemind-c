#include<stdio.h>
int main()
{
    float x,y,p,pp;
    scanf("%f%f",&x,&y);
    p=y-x;
    pp=(p/x)*100;
    printf("%.2f",pp);
}