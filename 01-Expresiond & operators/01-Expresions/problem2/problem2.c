/*
 ******************************************************************************
 * @file           : problem2 
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : 
 * @date           : 19 / 2 / 2024 
 ******************************************************************************
*/ 
#include<stdio.h>
int main()
{
	int var1 , var2 , resdiv , resremin;
	
	printf("please enter the variable 1 = ");
	scanf("%d",&var1);
	printf("please enter the variable 2 = ");
	scanf("%d",&var2);
	resdiv = var1 / var2 ;
	resremin = var1 % var2 ;
	printf("the result of division = %d \n ", resdiv);
	printf("the result of resremin = %d \n", resremin);
}