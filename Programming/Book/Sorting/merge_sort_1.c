/**merge sort algorith
 * written by maqsood ahmad tali on 04-04-2022*/

#include <stdio.h>
#include <math.h>

void merge_sort(int A[], int p, int q);
int merge(int A[], int p, int q, int r);

int print_array(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}

void main()
{
    int A[] = {6, 5, 8, 3, 19,9};
    int p = 0;
    int r = sizeof(A) / sizeof(int); // calculating size of an array and assigning it to r
    printf("Size of array %d \n",r);
    printf("Array before sorting \n");
    print_array(A, r);
    merge_sort(A, p, r); // calling the merge sort method
    printf("Array after sorting \n");
    print_array(A, r);
}

void merge_sort(int A[], int p, int r) // defining merge sort method
{
    int q;
    if (p < r)
    {
        q = (floor(p + r -1 ) / 2); // calculating mid point of an array
        printf("mid point is %d \n",q);
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}


int merge(int A[],int lb,int mid,int ub)
{
int i = lb;
int j = mid+1;
int k = lb ;
int  B[ub];
while (i <= mid && j <= ub)
{
    if (A[i] < A[j])
    {
        B[k] = A[i];
        i++;
    }
    else
    {
        B[k] = A[j];
        j++;
    }
    k++;
}
if( i > mid )
{
    while(j<=ub)
    {
        B[k] = A[j];
        j++;k++;
    }
}
else
{
    while( i <= mid )
    {
        B[k] = A[i];
        i++;k++;
    }
}

for(int l = lb ; l < ub ;l++)
{
    A[l] = B[l];
}
}
