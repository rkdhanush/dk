#include<stdio.h>
void main()
{
char str[50];
int i,count=0;
printf("enter the sentanc:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
count=count+1;
}
}
printf("\n no of words %d",count);
}
