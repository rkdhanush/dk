#include <stdio.h>

int main(void) 
{
	char s[50];
	int d,i;
	printf("enter the string:");
	scanf("%s",s);
	printf("enter the number:");
	scanf("%d",&d);
	for(i=0;i<d;i++)
	{
		printf("\n%s",s);
	}
	return 0;
}
