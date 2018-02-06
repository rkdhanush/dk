#include<stdio.h>
void main()
{
int a,r,temp=0;
printf("enter the value");
scanf("%d",&a);
temp=a;
while(temp!=0)
{
r=r*10;
r=r+temp%10;
temp=temp/10;
}
if(r==a)
printf("the number is palindrome %^d",a);
else
printf("the number is not palindrome %d",a);
}
