/*--------Rotation of arrays ------------
----------Left Rotatioin ---------------
----------Method 1 ----------------------*/
#include <stdio.h>
int printArray(int arr[], int n);
int leftRotate(int arr[], int n, int d);
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}, d, n;
    printf("Enter the number of places you want to shift an array :");
    scanf("%d", &d);
    //finding the size of an array
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
    int array[d];
    for (int i = 0; i < d; i++)//this loop will run the as the same number of times as the elements are rotated 
    {
        array[i] = arr[i];
    }
    int j = d;
    for (int i = 0; i < n - d; i++)//this loop will always run approx n times 

    {
        arr[i] = arr[j];
        j++;
    }

    j = 0;
    for (int i = n - d; i < n; i++)//this loop will run the number of times as the number of elements are rotated
    {
        arr[i] = array[j];
        j++;
    }
    return 0;
    //The time complexity will be O(n);
}