#include<stdio.h>
void main()
{
int x,y=0;
  printf("enter the number");
  scanf("%d",&x);
  while(x !=0)
  {
    x/=10;
    ++y;
  }
  printf("%d",y);
}
