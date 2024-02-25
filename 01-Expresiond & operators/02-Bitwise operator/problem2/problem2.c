/*
 ******************************************************************************
 * @file           : problem2
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to input any number from user and check whether nth bit of the given number is set (1) or not (0). 
 * @date           : 25/2/2024 
 ******************************************************************************
*/ 
#include<stdio.h>
int main ()
{
int bit , result ,number ;
printf("please enter the number = ");
scanf("%d",&number);
printf("please enter the bit = ");
scanf("%d",&bit);
result = (number>>bit)&1; // shift right 
if(result==1)
{
	printf("the number is %d and the bit %d = 1 \n",number,bit);
}
else 
{
  printf("the bit %d = 0 \n",bit);	
}
}