//program for stack using array
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define size 100
int top = -1;
int Stack[size];
int push(int n);
int pop();
int peek();
void main()
{
    int choice,x,data;
    printf("Press 1:For pushing an element into stack \n");
    printf("Press 2:For Poping an element into stack \n");
    printf("Press 3:For seeing the top element of stack \n");
    printf("Press 4:For checking if stack is full \n");
    printf("Press 5:For checking if stack is empty \n");
    printf("Press 6:For Exiting the program \n");
    while (1)
    {
        printf("-----------------------------------\n");
        printf("Please enter your choice :");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter the data you want to insert: ");
            scanf("%d",&data);
            push(data);
            break;
        }
        case 2:
        {
            x = pop();
            if(x == INT_MIN)
            break;
            else
            {
                printf("The element popped is %d\n",x);
                top --;
            }
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
           if( top == size-1 )
           {
               printf("Stack is full\n");
           }
           else
           {
               printf("Stack is not full\n");
           }
           break;
        }
        case 5:
        {
           if(top == -1 )
           {
               printf("Stack is empty\n");
           }
           else
           {
               printf("Stack is not empty\n");
           }
            break;
        }
        case 6:
        {
            printf("Exiting from the program ....\n");
            exit(0);
        }
        default:
        {
            printf("Wrong option please try again \n");
        }
      }
    }
}


/*int isFull(int arr[],int n)
{
    if (size == n-1)
    {
        printf("stack is full\n");
        return 0;
    }
    else
    {
        printf("Stack is not full you can insert elements");
        return 1;
    }
}

int isEmpty(int arr[],int n)
{
    if(top == -1)
    {
        printf("Stack is empty .\n");
        return 0;
    }
    else
    {
        printf("Stack is not empty you can insert elements.\n");
        return 1;
    }
}*/

int peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
        return 0;
    }
    printf("The top element of stack is %d \n",Stack[top]);
    return 0;
}

int push(int data)
{
  if(top>=size)
  {
      printf("Stack is under overflow condition\n");
      return 0;
  }

  else
  {
      top++;
      Stack[top] = data ;
      printf("Data pushed into stack\n");
      return 0;
  }
  

}

int pop()
{
    int x;
    if(top <= -1)
    {
        printf("Stack is underflow\n");
        return INT_MIN;
    }
    else
    {
        x = Stack[top];
    }
    return x;
}

