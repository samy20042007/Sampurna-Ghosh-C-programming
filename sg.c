//1=2+4+7+11 upto n terms w.c.p to calculate the sum of given series
#include<stdio.h>
int main()
{
	int n;
	int i=1;
	int term=1;
	int sum=0;
	int d=1;
	printf("enter the value of n\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",term);
		sum=+term;
		term=term+d;
    	d++;
		i++;
	}
	printf("the sum is:%d",sum);
	return 0;
	
}
