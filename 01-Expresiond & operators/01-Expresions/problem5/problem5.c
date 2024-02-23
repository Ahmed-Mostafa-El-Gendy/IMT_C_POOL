/*
 ******************************************************************************
 * @file           : problem5
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : write a c code that ask the user to enter two values (floating number ) and print their multiply   
 * @date           : 23/2/ 2024 
 ******************************************************************************
*/ 
#include<stdio.h>
int main ()
{
	float num1,num2;
	printf("please enter the value of num1 = ");
	scanf("%f",&num1);
	printf("please enter the value of num2 = ");
	scanf("%f",&num2);
	printf("the result of %0.3f * %0.3f = %0.3f ",num1 , num2 , num1 * num2 );
}