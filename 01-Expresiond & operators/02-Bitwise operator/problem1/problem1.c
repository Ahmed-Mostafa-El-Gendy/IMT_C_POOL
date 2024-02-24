/*
 ******************************************************************************
 * @file           : problem1
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to input any number from user and check whether Most Significant Bit (MSB) of given number is set (1) or not (0). 
 * @date           : 24/2/2024 
 ******************************************************************************
*/ 
#include<stdio.h>
int main ()
{
	char number ;
	printf("please enter a number = ");
	scanf("%d",&number);
	int bits = (sizeof(char )*8-1);
	int shift = 1 << bits ;
	number = ( number & shift  );
	if(number == 0 )
	{
		printf("the most bit = 0 ");
	}
	else 
	{
		printf("the most bit = 1 ");
	}
}