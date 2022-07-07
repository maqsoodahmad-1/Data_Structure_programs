/*write a program for push and pop operation of a stack in c */
#include<stdio.h>
#include<stdlib.h>
#define size 100
int top=-1,n;
void display();
int pushdata(int n);
int popdata();
int peek();
int a[size];
int main()
{
    int choice,data;
    // printf("enter the size of a stack:");
    // scanf("%d", &size);
    printf("enter 0 if you want to print data in the stack\n");
    printf("enter 1 if you want to push data in the stack\n");
    printf("enter 2 if you want to pop data in the stack\n");
    printf("enter 3 if you want to konw  the size of a stack\n");
    printf("enter 4 if you want to get top element of a stack\n");
    printf("enter 5 if you want to exit form the program\n");
    while (1)
    {
        printf("-----------enter your choice ------------- :\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 0:
        {
            display();
            break;
        }
        case 1:
        {
            if(top-1>=size)
            {
                printf("overflow\n");
            }
            else
           {
            printf("enter the data you want to push into stack :");
            scanf("%d",&data);
            pushdata(data);
            break;
           }
        }
        case 2:
        {
           data=popdata();
           top--;
           if(data!=-2)
           {
               printf("data =%d\n",data);
           }
            break;
        }
        case 3:
        {
            printf("size of stack = %d \n",top+1);
            break;
        }
        case 4:
        {
            printf("the top most element of a stack is %d : \n",a[top]);
            break;
        }
        case 5:
        {
            printf("exiting from program \n");
            exit(0);
        }
        default:
        {
            printf("invalid choice try again \n");
            break;
        }
        }
    }
    return 0;
}
   int pushdata(int element) 
   {
    // if (top == (size-1))
    // {
    //     printf("overflow can't insert data into stack\n");
    // }
    // else
    
          top++;
          a[top]=element;
          printf("data pushed into stack \n");
    return 0;
   }
    int popdata()
    {
        if(top<0)
        {
            printf("stack is empty\n");
            return -2;
        }
         return a[top];
    }
    void display()
    {
        int i;
        if(top<0)
        {
            printf("stack is empty \n");
        }
        else
        {
            printf("data of stack is \n");
            for(i=0;i<=top;i++)
            {
                printf("%d\n",a[i]);
            }
        }
    }
  