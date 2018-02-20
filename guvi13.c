#include <stdio.h>

int main(void) 
{
	int array[20],n,i,g,temp;
	float med;
	printf("\n enter the no. of elements");
	scanf("%d",&n);
	printf("\n enter the array elements");
	for(i=0;i<n;i++)
	{
       scanf("%d",&array[i]);
	}
	for (i=0;i<n;i++)
	{
		for(g=i+1;g<n;g++)
		{
			if(array[i]>array[g])
			{
				temp=array[i];
				array[i]=array[g];
				array[g]=temp;
			}
		}
	}
	if(n%2==0)
	{
		med=(array[n/2]+array[(n-1)/2])/2;
	}
	else
	{
		med=array[n/2];
	}
	printf("%f",med);
}
