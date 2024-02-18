/*
 ******************************************************************************
 * @file           : problem0 
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a c code that will ask the user to enter four values a,b,c and d then evaluates the ratio of (a+b) to (c-d) and prints the result, If (c-d) is not equal zero
 * @date           : 18 / 2 / 2024 
 ******************************************************************************
*/ 
#include<stdio.h>
int main ()
{
	int num1 , num2 , num3 , num4 ;
	int result1 , result2 , totalresult ;
	printf("please enter the num1 = ");
	scanf("%d",&num1);
	printf("please enter the num2 = ");
	scanf("%d",&num2);
	printf("please enter the num3 = ");
	scanf("%d",&num3);
	printf("please enter the num4 = ");
	scanf("%d",&num4);
	result1 = (num1 + num2 );
	result2 = (num3 - num4 );
	if((result2>0)&&(result2!=0))
	{
		printf("the result of %d / %d = %d ",result1,result2,result1/result2);
	}
	else 
	{
		printf("can't divided by zero ");
	}
}