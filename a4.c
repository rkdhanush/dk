#include<stdio.h>
void main()
{
char str[50];
int i,count=0;
printf("enter the sentence:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0' && str[i]<='9')
{
count=count+1;
}
}
printf("\n no of numeric char:%d",count);
}
