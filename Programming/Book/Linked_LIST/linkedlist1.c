/*program to create a linked list in c programming language 
 Date 31-12-2021 
 programmed by:Maqsood Ahamd Tali*/
#include <stdio.h>
#include <stdlib.h>
//function decleration to tell the compiler that we are gong to use define these three functions later on in this program
int createlist(int n);
void displaylist();
void add_node_at_the_begning();
//creating a node with two feilds data feild and address feild
struct node
{
    int data;
    struct node *next;
} * head;//two pointer of above structure
void main()
{
    int n, choice;
    while (1)
    {   //giving messege to a user what he can do and how
        printf("\npress 1 if you want to create a new list\n");
        printf("press 2 if you want to display list\n");
        printf("press 3 if you want to add a node into list\n");
        printf("press 5 if you want to exit form program\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("enter the number of nodes you want to create\n");
            scanf("%d", &n);
            createlist(n);//calling a createlist function
            break;
        }
        case 2:
        {
            displaylist();//calling a displaylist function
            break;
        }
        case 3:
        {

            add_node_at_the_begning();
            break;
        }
        case 4:
        {
            printf("exiting from program \n");//exiting from a program 
            exit(0);
        }
        default:
        {
            printf("invalid option try another way \n");
        }
        }
    }
}
int createlist(int n)
{
    struct node *newnode,*temp;
    int i, data;
    //dynamically allocatting memory in address of head variable which is of struct node data type 
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)//condition to check if memeory is allocated dynamically 
    {
        printf("unable to allocate memory \n");
    }
    else
    {
        printf("enter the data of first node of a list\n");
        scanf("%d", &data);
        head->data = data;//data entered by user is assigned to the data feild of head node 
        head->next = NULL;//no other node is linked to head node since head's next pointer is assigned value null
        temp = head;
        for (i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));//memory is allocated to newnnode dynamically
            if (newnode == NULL)//condition to check if memory is allocated successfully
            {
                printf("unable to allocate memory \n");
                break;
            }
            else
            {
                printf("enter the data of node %d\n", i);
                scanf("%d", &data);
                newnode->data = data;//data vlaue entered by user is assigned to the data feild of newnode
                newnode->next = NULL;//no node is linked to the newnode yet since next feild is assigned a value null
                temp->next = newnode;//temporary is now linked to newnode 
                temp = temp->next;//temporary pointer is now updated 
            }
        }
        printf("singly linked list created successfully\n");
    }
}
void add_node_at_the_begning()

{
    int data;
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    if (newnode == NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("enter the data of node\n");
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = head;
        head = newnode;
        printf("node added successfully itno the linked list \n");
    }
}
void displaylist()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}