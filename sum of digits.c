#include<stdio.h>
int main()
{
	int n,r,sum;
	printf("Enter a number:%d",n);
	scanf("%d",&n);
	
	while(n)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	printf("Sum of digits:%d",sum);
	return 0;
}
