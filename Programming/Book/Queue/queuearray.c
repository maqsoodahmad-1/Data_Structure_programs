/*--------------------------------------------------------------------------------------------------------------------------------------------------
 ***************************************SIMPLE QUEUE IMPLEMENTATION PROGRAM IN C LANGUAGE USING ARRAY***********************************************
 --------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define size 5
int push(int data);
int pop();
int printQueue();
int Queue[size];
int FRONT = -1, REAR = -1;

void main()
{
    int data, choice, x;
    printf("Press 1: for inserting data into Queue \n");
    printf("Press 2: for deleting data from Queue \n");
    printf("Press 3: for printing data of Queue \n");
    printf("Press 4: for position of FRONT \n");
    printf("Press 5: for position of REAR \n");
    printf("Press 6: for exiting from the program\n");
    while (1)
    {
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            if (REAR == size - 1)
            {
                printf("Queue is full\n");
            }
            else
            {
                printf("Enter the element you want to insert into Queue: ");
                scanf("%d", &data);
                push(data);
            }
            break;
        }

        case 2:
        {
            if (FRONT == -1)
            {
                printf("Queue is underflow\n");
            }
            else
            {
                x = pop();
                printf("The element deleted is %d \n", x);
            }
            break;
        }
        case 3:
        {
            printQueue();
            break;
        }
        case 4:
        {
            printf("The Front is at location %d\n", FRONT);
            break;
        }
        case 5:
        {
            printf("The Rear is at position %d\n ", REAR);
            break;
        }
        case 6:
        {
            printf("Exiting the program ....\n");
            exit(0);
        }
        default:
        {
            printf("Wrong press try again\n");
        }
        }
    }
}

int push(int data)
{
    if (FRONT == -1)
    {
        REAR = 0;
        FRONT = 0;
        Queue[REAR] = data;
    }

    else
    {
        REAR = REAR + 1;
        Queue[REAR] = data;
    }
    printf("Data inserted into Queue\n");
    return 0;
}

int pop()
{
    int x;
    if (FRONT == REAR)
    {
        x = Queue[FRONT];
        FRONT = -1;
        REAR = -1;
    }
    else
    {
        x = Queue[FRONT];
        FRONT += 1;
    }
    return x;
}

int printQueue()
{
    if (FRONT == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (int i = FRONT; i <= REAR; i++)
        {
            printf("%d\t", Queue[i]);
        }
        printf("\n");
    }
    return 0;
}