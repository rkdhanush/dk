#include<stdio.h>
void main()
{
    int i,a[i],j,n,b,c,g;
    printf("enter elements to sort");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
}
 for(i=1;i<=n;i++)
 {
     
 
  for(j=1;j<=n;j++)
 {
    if(a[i]<a[j])
    {
        b=a[i];
        a[i]=a[j];
        a[j]=b;
    }
  }
}
 printf("sorted array is");
 for(i=1;i<=n;i++)
 {
     printf(" %d",a[i]);
 }
    if(n%2==0)
    {
        c=a[n/2];
        
     printf("\n median is %d",c);
    }
    else
    {
        c=a[(n/2)+1];
       
     printf(" \n median is %d",c); 
    }
    }
