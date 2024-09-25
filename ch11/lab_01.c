#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numbers,i,j,temp;
	int * Pointer ;
	
	printf("Please enter the number of numbers :");
	scanf("%d",&numbers);
	
	Pointer = (int*)malloc(numbers*sizeof(int));
	
	for(i=0 ; i<numbers ; i++)
	{
		printf("Please Enter Number %d " , i+1);
		scanf("%d",(Pointer+i));
	}
	
	printf("The values after sorting are :\n");
	
	for(i=0 ; i<(numbers-1) ; i++)
	{
		for(j=0 ; j<(numbers-i-1) ; j++)
		{
			if((*(Pointer+j))>(*(Pointer+j+1)))
			{
				temp = (*(Pointer+j)) ;
				(*(Pointer+j))=(*(Pointer+j+1));
				(*(Pointer+j+1)) = temp ;
			}
		}
	}
	
	for(i=0 ; i<numbers ; i++)
	{
		printf("%d\n",(*(Pointer+i)));
	}
	
	return 0 ;
}	
