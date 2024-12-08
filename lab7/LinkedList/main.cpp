#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ENTER  13


struct node
{
    char value;
    struct node *next;
};

typedef struct node Node;


Node* inputName()
{
    Node *name = NULL;
    Node *last = NULL;
    while(1)
    {
        char ch = getche();
        if(ch == ENTER)
            break;
        else
        {
            Node *N = (Node*)malloc(sizeof(Node));
            N->value = ch;
            N->next = NULL;

            if(name == NULL)
                name = N;
            else
                last->next = N;

            last = N;
        }
    }
    return name;
}

void printName(Node *name)
{
    printf("\nHello: ");
    Node *current2 = name;
    while(current2 != NULL)
    {
        printf("%c", current2->value);
        current2 = current2->next;
    }
}

void freeMemory(Node *name)
{
    Node *current3 = name;
    while(current3 != NULL)
    {
        Node *temp = current3;
        current3 = current3->next;
        free(temp);
    }
}

int main()
{
    printf("Enter Your Name: ");

    Node *name = inputName();
    printName(name);
    freeMemory(name);

    return 0;
}

