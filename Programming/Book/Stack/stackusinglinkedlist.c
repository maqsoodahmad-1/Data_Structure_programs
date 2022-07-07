#include<stdio.h>
#include<stdlib.h>
void display();
int pushdata(int value);
int popdata();
int peek();
struct node
{
    int data;
    struct node *next;
};
struct node*top=NULL;
int main()
{
    int choice,data;
    printf("----------stack implementation program----------");
    printf("enter 0 if you want to print data in the stack\n");
    printf("enter 1 if you want to push data in the stack\n");
    printf("enter 2 if you want to pop data in the stack\n");
    printf("enter 3 if you want to konw  the size of a stack\n");
    printf("enter 4 if you want to get top element of a stack\n");
    printf("enter 5 if you want to exit form the program\n");

 while (1)
 {
    printf("-------------enter your choice-----------------");
    scanf("%d",&choice);
    switch (choice)
    {
    case 0:
    {
        display();
        break;
    }
    case 1:
    {
        printf("enter the data yoiu want to push");
        scanf("%d",&data);
        pushdata(data);
        break;
    }
    case 4:
    {
        printf("exiting from program \n");
        exit(0);
    }
    default:
    {
        printf("invalid  choice please try differently");
        break;
    }
    }
 } 
}   
int pushdata(int value) 
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory allocation failed can't insert data ");
        return-3;
        exit(0);
    }
    else
    {
     newnode->data=value;
     newnode->next=NULL;
     top=newnode;
    }
    return 0;
}
void display()
{
    int i;
if (top==NULL)
{
    printf("no data exit stack is empty");
}
else
{
    for(i=top;i>=0;i--)
    {
             printf("Data=>%d",top->data);
    }
}


}