
#include <stdio.h>

typedef struct class
{
	int Math ;
	int language ; 
	int physics ;
	int Chemistery;
}class_t;

int main(void){
	
	int ID ;
	class_t students[10]={ {40,50,60,70},{44,55,66,77},{98,87,65,54},{45,56,78,89},{69,58,47,36},
						   {74,85,96,63},{35,68,57,24},{48,59,26,78},{55,87,64,94},{91,84,61,35}};
			
			//student ID is the index in the array
			printf("Please Enter student ID : ");
			scanf("%d",&ID);
			
		if(ID>=0 && ID<=9){
			printf("Math Grade = %d \n" , students[ID].Math);
			printf("Language Grade = %d \n" , students[ID].language);
			printf("Physics Grade = %d \n" , students[ID].physics);
			printf("Chemistery Grade = %d \n" , students[ID].Chemistery);
		}

		else			
			printf("Student ID is not correct");
		
	return 0 ;
}
