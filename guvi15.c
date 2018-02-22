#include<stdio.h>
void main()
{
char str[10];
int n,j;
printf("enter the string");
scanf("%s",&str);
n=strlen(str);
for(j=0;j<n;j++)
{
if(str[j]>='0' && str[j]<='9')
{
printf("\nyes");
} 
else
{
printf("\nno");
}
}
}
