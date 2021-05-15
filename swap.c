#include<stdio.h>
int main()
{
	int a,b;
	a=5;
	b=10;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swapped values of a and b are:%d ,%d",a,b);
	return 0;
}
