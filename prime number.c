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
		printf("It is a prime number.");
	}
	else
	{
		printf("It is not a prime number.");
	}
	return 0;
}

