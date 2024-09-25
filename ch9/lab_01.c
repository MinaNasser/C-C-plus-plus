
#include <stdio.h>

struct employee
{
	int salary ;
	int bonus ;
	int deduction;
};

int main(void)
{
	struct employee Ahmed ;
	struct employee Waleed ;
	struct employee Amr ;
	
	int Salary , Bonus , Deduction;
	
	printf("Please Enter Ahmed's Salary : ");
	scanf("%d", &(Ahmed.salary));
	
	printf("Please Enter Ahmed's Bonus : ");
	scanf("%d", &(Ahmed.bonus));
	
	printf("Please Enter Ahmed's Deduction : ");
	scanf("%d", &(Ahmed.deduction));
	
	printf("Please Enter Amr's Salary : ");
	scanf("%d", &(Amr.salary));
	
	printf("Please Enter Amr's Bonus : ");
	scanf("%d", &(Amr.bonus));
	
	printf("Please Enter Amr's Deduction : ");
	scanf("%d", &(Amr.deduction));
	
	printf("Please Enter Waleed's Salary : ");
	scanf("%d", &(Waleed.salary));
	
	printf("Please Enter Waleed's Bonus : ");
	scanf("%d", &(Waleed.bonus));
	
	printf("Please Enter Waleed's Deduction : ");
	scanf("%d", &(Waleed.deduction));
	
	
	Salary = (Ahmed.salary) + (Amr.salary) + (Waleed.salary) ;
	Bonus = (Ahmed.bonus) + (Amr.bonus) + (Waleed.bonus) ;
	Deduction = (Ahmed.deduction) + (Amr.deduction) + (Waleed.deduction) ;
	
	printf("Total Value Needed is %d " , (Salary+Bonus-Deduction));
	
	
	return 0 ;
}	
