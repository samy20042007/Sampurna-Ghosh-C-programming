//2+5+8+11+14.. upto n terms wcp to calculate the sum of given series
#include<stdio.h>
int main()
{
	int n;
	int i=1;
	int term=2;
	int sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	while (i<=n)
	{
		sum+=term;
		term+=3;
		i++;
	}
	printf("the sum is:%d",sum);
	return 0;
}
