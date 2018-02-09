#include <stdio.h>
int main()
{
    int i, count=0;
    char ch[15]="hello world";
    for(i=0;ch[i]!=0;i++)
    {
     if(ch[i]==' ')	
     count++;
    }
    printf("the number of words is:%d ",count+1);
    return 0;
 }
