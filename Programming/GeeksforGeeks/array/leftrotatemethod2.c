/*--------Rotation of arrays ------------
----------Left Rotation -----------------
----------Method 2 ----------------------*/
#include <stdio.h>
int printArray(int arr[], int n);
int leftRotate(int arr[], int n, int d);
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}, d, n;
    printf("Enter the number of places you want to shift an array :");
    scanf("%d", &d);
    n = sizeof(arr) / sizeof(arr[0]);
    printf("size of array is %d\n", n);
    printf("Elements before rotation\n");
    printArray(arr, n);
    printf("\n");
    leftRotate(arr, n, d);
    printf("Elements after left rotation\n");
    printArray(arr, n);
    printf("\n");
}

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}

int leftRotate(int arr[], int n, int d)
{
    int temp;
    int i = 0;
    for (int j = 0; j < d; j++)//this loop will run d times 
    {
        temp = arr[i];
        for (int k = 0; k < n; k++)//this loop will run n times 
        {
            arr[k] = arr[k + 1];
        }
        arr[n - 1] = temp;
        //  printf("Array after rotation of elemnet\n");
        //  printArray(arr,n);
    }
    return 0;
    //The time complexity in the worst case(when all the elements need to be rotated ) 
    //will be O(n^2);
    //The time complexity in the best case ( when no element is rotated ) will be constant
    //The time complexity in the average case will be O(n * d);
}