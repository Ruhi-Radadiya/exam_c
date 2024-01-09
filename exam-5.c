#include<stdio.h>
void main()
{
	int a,b;
	int *ptr;
	
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	
	ptr=a;
	a=b;
	b=ptr;
	
	printf("a=%d\n",a);
	printf("b=%d",b);
}
