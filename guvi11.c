#include<stdio.h>
int main()
{
int a[50],j,i,m;
printf("enter the size of arr");
scanf("%d",&j);
printf("enter the array elements");
for(i=0;i<j;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=1;i<j;i++)
{
if(m>a[i])
m=a[i];
}
printf("the minimum value is %d",m);
}
