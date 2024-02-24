/*
 ******************************************************************************
 * @file           : problem0
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to input any number from user and check whether the Least Significant Bit (LSB) of the given number D is set (1) or not (0). 
 * @date           : 24/2/2024 
 ******************************************************************************
*/ 
#include<stdio.h>
int main ()
{
	char number ;
	printf("please enter a number = ");
	scanf("%d",&number);
	number = ( number & 1 );
	if(number == 0 )
	{
		printf("the least bit = 0 ");
	}
	else 
	{
		printf("the least bit = 1 ");
	}
}