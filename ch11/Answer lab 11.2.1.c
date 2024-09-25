#include <stdio.h>
#include <stdlib.h>


/**********************Data Types***********************/

typedef struct Node
{
	int Data ;
	struct Node * Next ;
}node_t;

/*Define the new type of the node over all*/
typedef struct
{
	node_t * Head ;          //pointer to the first node
	int size ;                   //number of nodes in the list
}list_t;

/**********************Prototypes************************/


//This function is to add a node to the end of the list
void AddNode(void);

//This function is to print the list nodes
void PrintList(void);


//New list
list_t MyList ;
list_t * pointer = &MyList ;


int main(void)
{
	int choice = 0 ;
	while(choice!=2)
	{
		printf("To add node enter 0\n");
		printf("To print the linked list enter 1\n");
		printf("To exit enter 2\n");			
		printf("Your choice : ");
		scanf("%d", &choice);
	
		switch(choice)
		{
			case 0 :  AddNode();	   								 break ;
			case 1 :	  PrintList();      								 break ;
			case 2 : /*do nothing*/  								 break ;
			default :printf("Invalid entry , try again \n");   break ;			
		}
	}
	printf("Thank you \n Good Bye");
	return 0 ;
}


void AddNode(void)
{
		int i=0;
				
		node_t * temp ;
		node_t * NewNode ;	

		/*create the new node*/
		NewNode=(node_t*)malloc(sizeof(node_t));
		
		/*assign the data*/
		printf("Please add the node value : ");
		scanf("%d" , &(NewNode->Data));
	
		/*next of the node pointing to null*/
		NewNode->Next = NULL;
		
		/*check whether the created node is the first or not*/
		if(pointer -> size==0)
		{
			pointer->Head = NewNode ;
		}
		
		/*in case of non-empty linked list*/
		else
		{
			/*temp pointer for linking*/
			temp = pointer->Head;
		
			//moving the temp pointer to the last node
			while(temp->Next!=NULL)
			{
				temp = temp->Next;
			}
				
			//do the linking		
			temp->Next = NewNode ;
		}
		
		(pointer->size)++;
		printf("Node added , Thank you\n");

}


void PrintList(void)
{
		node_t * temp ;
		int i=0;	

		temp = pointer->Head;
		printf("\n\n");
		
		printf("-------------------------------");
		printf("\n");
		
		if((pointer->size)>0)
		{
			i=0;
			while(temp!=NULL)
			{
				printf("node no %d = %d\n" ,i, temp->Data);
				temp = temp->Next ;
				i++ ;
			}
		}

		else
			printf("The list is empty\n");
			printf("-------------------------------");
			printf("\n");
}
