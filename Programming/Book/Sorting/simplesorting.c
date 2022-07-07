//sortig program by maqsood ahmad tali 
//written  on 23-03-2022
#include<stdio.h>
#include<stdlib.h>
void main()
{
int size;
printf("enter the size of array :");
scanf("%d",&size);
int arr[size],n;
printf("Enter the number of elements in an array :");
scanf("%d",&n);
if(size <n)
{
    printf("elements size can't exceed size of  array\n");
    exit(0);
}
printf("Enter the elements of an array \n");
//for loop for taking elements to sort 
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
//sorting procedure start
for(int i=0;i<n;i++)
{
    int temp;
//condition  to check if element is greater than the next element 
    if(arr[i]>arr[i+1])
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
//printing the elements in a sorted order
for(int i=0;i<n;i++)
{
    printf("\n%d\t",arr[i]);
}
printf("\n");
}