
#include <stdio.h>

int main(void) 
{
	int arr[10],j,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\n enter the array elments:");
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
		printf("\n%d %d",arr[j],j);
	}
	return 0;
}
