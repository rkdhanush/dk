#include<stdio.h>
void main()
{
int g,s,j,d,e,r,i;
printf("entr the limits");
scanf("%d%d",&g,&s);
for(i=g;i<=bs;i++)
{
d=0;
j=i;
while(j!=0)
{
r=j%10;
d=d+(r*r*r);
j=j/10;
}
if(d==i)
{
printf("%d",i);
}
}
}
