// program for insertion sort
// Date:29-03-2022
// Writer: Maqsaood
#include <stdio.h>
int insertion_sort(int arr[], int n)
{
    int j = 0, key = 0;

    for (int i = 2; i <= n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
   
}

int print_array(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}


int main()
{
    int n;
    int arr[] = {7, 6, 2, 1, 4};
    n = sizeof(arr) / sizeof(int);
    print_array(arr, n);
    insertion_sort(arr, n);
    print_array(arr, n);
    return 0;
}