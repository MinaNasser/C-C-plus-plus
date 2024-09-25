#include <stdio.h>

int Summation(int*operand1 , int*operand2);

int main(void)
{
	int value1 , value2 , output;
	int * ptr1 = &value1 ;
	int * ptr2 = &value2 ;
	
	printf("Please enter num1 : ");
	scanf("%d",&value1);
	
	printf("Please enter num2 : ");
	scanf("%d",&value2);
	
	output=Summation(&value1,&value2);
	
	printf("The result = %d ",output);
	
	return 0 ;
}


int Summation(int*operand1 , int*operand2)
{
	int result ;
	result = (*operand1) + (*operand2) ;
	return result ;
}