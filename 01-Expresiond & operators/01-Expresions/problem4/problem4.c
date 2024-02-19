/*
 ******************************************************************************
 * @file           : problem3 
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : swap two variables without using third variables  
 * @date           : 19 / 2 / 2024 
 ******************************************************************************
*/ 
#include<stdio.h>
int main ()
{
	int var1,var2 ;
	printf("please enter the var1 = ");
	scanf("%d",&var1);
	printf("please enter the var2  = ");
	scanf("%d",&var2);
	printf("the var1 before swap = %d \n" ,var1);
	printf("the var2 before swap = %d \n ",var2);
	var1=var1+var2;
	var2=var1-var2;
	var1=var1-var2; 
	printf("the var1 after swap = %d \n ",var1);
	printf("the var2 after swap = %d \n ",var2);
}