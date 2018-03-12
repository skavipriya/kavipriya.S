#include<stdio.h>
int main()
{
  int a,j,f=1;
  scanf("%d",&a);
  for(j=2;j<=a/2;j++)
  {
    if(a%j==0)
    {
   
    	f=0;
    	break;
    }
    
  }
  if(f==1)
  printf("Yes");
  else
  printf("No");
  return 0;

}

	
