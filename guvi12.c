
#include<stdio.h>
int main(void)
{
	int n,a[100],i,g,min,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
   for(g=i+1;g<n;g++)
		{	
			
	if(a[i]>a[g])
			{
			temp=a[i];
			a[i]=a[g];
			a[g]=temp;
			}
		}
		printf("%d ",a[i]); 
	}
