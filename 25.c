#include <stdio.h>
int main()
{
int a[10],i,j,b,n,temp;
printf("enter the array value");
scanf("%d",&n);
printf("enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
  printf("%d",a[i]);
}
  b=n/2;
  for(i=0;i<n;i++)
  {
    if(a[i]==a[j])
    {
      printf("the meddle element is %d",a[j]);
    }
  }
	
	return 0;
}
