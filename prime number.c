#include<stdio.h>
#include<stdbool.h>
bool prime(int n);
bool prime(int n)
{
	int i=2;
	while(i*i<=n)
	{
		if(n%i==0)
		{
			return false;
		}
		i++;
	}
	return true;
	bool prime();
}

int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	bool ans=prime(n);
	if(ans==true)
	{
		printf("%d is a prime number.",n);
	}
	else
	{
		printf("%d is not a prime number.",n);
	}
	return 0;
}

