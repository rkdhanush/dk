#include <stdio.h>

int main(void) 
{
int a=1,b=1,i,n,d;
printf("\n enter the range to print the Fibonacci numbers\n");
scanf("%d",&n);
printf("%d",a);
printf("\t%d",b);
for(i=1;i<=n-2;i++)
{
d=a+b;
printf("\t%d",d);
a=b;
b=d;
}
return 0;
}
