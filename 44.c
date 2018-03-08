#include <stdio.h>

int main(void) 
{
	int d;
	printf("enter the number:");
	scanf("%d",&d);
	if(d>=1 && d<=10)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
