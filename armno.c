#include <stdio.h>

int main(void) {
  int num,i,f,r,sum=0,temp;
 printf("Enter a number: ");
  scanf("%d",&num);
  temp=num;
  while(num){
      i=1,f=1;
      r=num%10;

      while(i<=r)
      {
         f=f*i;
        i++;
      }
      sum=sum+f;
      num=num/10;
  }
  if(sum==temp)
      printf("%d yes",temp);
  else
      printf("%d no",temp);

	return 0;
}
