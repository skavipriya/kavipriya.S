#include<stdio.h>
void main()
{
    int f=0,s=1,l,lim,i;
    printf("enter the limit");
    scanf("%d",&lim);
    printf("%d%d",f,s);
    for(i=2;i<=lim;i++)
    {
        l=f+s;
        f=s;
        s=l;
        printf("%d",l);
    }
}
