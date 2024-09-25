
#include <stdio.h>

int Scalar(int array1[],int array2[]);

int main(void)
{
	int arr1[10] , arr2[10] , i , scalarMul;
	int * ptr1=arr1 ;
	int * ptr2=arr2;
	
	printf("Enter elements of first array : \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",(ptr1+i));
	}
	
	printf("Enter elements of second array : \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",(ptr2+i));
	}
	
	scalarMul =Scalar(arr1,arr2);
	printf("Scaler multiplication of 2 arrays = %d ",scalarMul);
	return 0 ;
}

int Scalar(int * array1,int * array2)
{
	int result = 0 , i = 0 ;
	
	for(i=0;i<10;i++)
	{
		result += ((*(array1+i)) * (*(array2+i)));
	}
	
	return result ;
}	