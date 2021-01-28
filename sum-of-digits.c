#include<stdio.h>
int sum(int num);//function prototype
main()
{
	int num,result;
	printf("Input number:");
	scanf("%d",&num);
	result=sum(num);//function call
	printf("Sum of digits:%d",result);
	return 0;
}
int sum(int num)//function definition
{
	if(num!=0)
	{
		return(num%10+sum(num/10));
	}
	else
	{
		return 0;
	}
}
