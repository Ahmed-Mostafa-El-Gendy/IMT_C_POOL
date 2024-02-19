/*
 ******************************************************************************
 * @file           : problem1 
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a c code that will ask the user to enter a character then print it and find ASCII   value of this character Then print it
 * @date           : 19 / 2 / 2024 
 ******************************************************************************
*/ 
#include<stdio.h>
int main()
{
	char x ;
	printf("please enter the character ");
	scanf(" %c",&x);
	printf("the character is %c \n",x);
	printf("the ascii of character is %d \n",x);
	printf("thank you ");
}