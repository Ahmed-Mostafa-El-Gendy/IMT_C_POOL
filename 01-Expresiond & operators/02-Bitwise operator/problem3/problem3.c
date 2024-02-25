/*
 ******************************************************************************
 * @file           : problem3 
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to input any number from user and set nth bit of the given number as 1 
 * @date           : 25 / 2 / 2024 
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
printf("the number before set bit = %d \n",number);
result= number | (1<<bit);
printf ("the number after set bit = %d ",result);
}