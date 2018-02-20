
#include<stdio.h>

void main()
{
    int a[10],i,j,n,max,c;
    printf("enter the array of numbers");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    {  max=a[0];
        for(i=0;i<=n;i++)
    
        {
    if(a[i]>max)
    max=a[i];
        }
    printf("\n %d",max);
    }
    
}
