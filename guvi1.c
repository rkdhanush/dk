#include<stdio.h>
void main()
{
int i,a,b;
printf("enter the value a");
scanf("%d",&a);
printf("enter the value b");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
if(i%2==1)
printf("%d",i);
}
}
