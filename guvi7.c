#include <stdio.h>

int main() {
	int d,i,l;
	printf("enter the no");
	scanf("%d",&d);
	printf("enter the limit");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	if(i%d==0)
	printf("%d",i);
	

	return 0;
}
