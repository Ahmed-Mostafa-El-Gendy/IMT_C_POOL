/*
 ******************************************************************************
 * @file           : problem6
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : write a c code to print lenght and width of a rectangle and calculate area and perimter of the rectangle
 * @date           : 23/2/ 2024 
 ******************************************************************************
*/ 
#include<stdio.h>
int main ()
{
	int lenght , width;
	float area , perimter ;
	printf("please enter the value of lenght= ");
	scanf("%d",&lenght);
	printf("please enter the value of width = ");
	scanf("%d",&width);
	area = lenght * width ;
	perimter = ((lenght+width)*2);
	printf("the value of area = %0.2f \n ",area);
	printf("the value of area = %0.2f",perimter);
	
	
	
	
}