/*--------Rotation of arrays ------------
----------Right Rotation ----------------
----------Method 1 ----------------------*/
#include <stdio.h>
int printArray(int arr[], int n);
int rightRotate(int arr[], int n, int d);
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
    rightRotate(arr, n, d);
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

int rightRotate(int arr[], int n, int d)
{
    int array[d],j = 0;
    for (int i = n - 1; i > n - d - 1; i--)
    {
        array[j] = arr[i];
        j++;
    }
    
    for (int i = n - 1; i > d - 1; i--)
    {
        arr[i] = arr[i - 2];
    }

    j = 0;
    for (int i = 0 ; i < d; i++)
    {
        arr[i] = array[j];
        j++;
    }
    return 0;
}