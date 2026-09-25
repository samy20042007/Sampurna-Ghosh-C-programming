//w.c.p which accept an integer num and print the multiplication of the digit
#include<stdio.h>
int main()
{
	int num,rem ,product=1;
	printf("Enter a num:");
	scanf("%d",&num);
	if(num==0)
	{
		product=0;
	}
	while(num>0)
	{
		rem=num%10;
		product=product*rem;
		num=num/10;
	}
	printf("product of digits=%d/n",product);
	return 0;
}

