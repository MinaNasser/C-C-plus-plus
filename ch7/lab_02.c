#include <stdio.h>

void calculator(int op1 , int op2 , int * sumResult , int * subResult);

int main(void){
	
	int operand1 , operand2 , sum , sub;
	int *ptr1 = &operand1;
	int *ptr2 = &operand2;
	int *sumPtr = &sum ;
	int *subPtr = &sub ;
	
	printf("Please enter num1 : ");
	scanf("%d",&operand1);
	
	printf("Please enter num2 : ");
	scanf("%d",&operand2);
	
	calculator(operand1 , operand2 , &sum , &sub);
	
	printf("The sum = %d \n", *sumPtr);
	printf("The sub = %d " , *subPtr);

	return 0 ;
}

void calculator(int op1 , int op2 , int * sumResult , int * subResult)
{
	*sumResult = op1 + op2 ;
	*subResult = op1 - op2 ;	
}