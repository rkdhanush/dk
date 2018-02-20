#include<stdio.h>
void main()
{
    int a,k,n,c,d,g;
    scanf("%d %d %d",&a,&n,&d);
    c=a+(n-1)*d;
    g=(n*(a+c)/2);
    printf("\n %d",g);
}
