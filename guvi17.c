
#include <stdio.h>
#include<conio.h>

int main(void) 
{
	char str[10];
	int n,j;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	for(j=0;j<n;j++)
	{
		if(str[j]>='0' && str[j]<='9')
		{
			printf("\n YES");
		}
		else
		printf("\n NO");
	}
	return 0;
