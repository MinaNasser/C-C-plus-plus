
#include <stdio.h>

int factorial(int number);

int main(void)
{
	int arr[10] , i , sum=0;
	int * arrPtr = &arr[0] ;
	
	for(i=0;i<10;i++)
	{
		printf("Enter element number %d : ",i );
		scanf("%d",(arrPtr+i));
		
		sum += (*(arrPtr+i));
	}
	
	printf("The summation = %d",sum);
	
	return 0 ;
}

	