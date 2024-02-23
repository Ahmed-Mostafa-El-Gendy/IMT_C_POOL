/*
 ******************************************************************************
 * @file           : problem7
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : write a code to input a mark of five subject student and calculate total mark ,average and percetage of all subject 
 * @date           : 23/2/ 2024 
 ******************************************************************************
*/ 
#include<stdio.h>
int main ()
{
	int sub1,sub2,sub3,sub4,sub5;
	printf("please enter the five mark for five subject =");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	float total = sub1+sub2+sub3+sub4+sub5;
	float average = ( total / 5 ) ;
	printf("the total = %0.2f \n", total);
	printf("the average = %0.2f \n", average );
	
}