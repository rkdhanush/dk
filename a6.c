#include <stdio.h>
 
int main(void) 
{
int d,k;
printf("\n enter two numbers to swap:");
scanf("%d %d",&d,&k);
printf("\n before swapping:");
printf("\nx=%d",d);
printf("\ny=%d",k);
d=d+k;
k=d-k;
d=d-k;
printf("\n after swapping:");
printf("\nd=%d",d);
printf("\nk=%d",k);
return 0;
}
