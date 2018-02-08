#include<stdio.h>
void main()
{
int i,a;
printf("enter the value a");
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if(a%i==0)
break;
}
if(a==i)
printf("the number is prime %d",a);
else
printf("the number is not a prime number %d",a);
}
