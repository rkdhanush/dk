#include <stdio.h>

int main() {
     int d,k,r=0,temp;
     printf("no. is");
     scanf("%d",&n);
     temp=n;
     while(temp!=0)
     {
     	d=temp%10;
     	r=r+r*r*r;
     	temp=temp/10;
     }
     if(k==r)
     printf("amstrong no is%d",k);
     else
     printf("not amstrong%d",k);
     return 0;
}
