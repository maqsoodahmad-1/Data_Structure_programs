#include<stdio.h>

void print_array(int A[],int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}

void selection_sort(int A[],int n)
{
    int min,loc,j;
    for(int i = 0 ; i< n - 1 ;i++ )
    {
        min = A[i];
        loc = i;
        j = i+1;
        for (j = i + 1; j < n ; j++) 
        {
            if (A[j]<min)
            {     
                min = A[j];
                loc = j ;
            }
        }
      if(i != loc)
      {
         int temp = A[i];
         A[i] = A[loc];
         A[loc] = temp;
      }
        
    }

}

void main()
{   
    int n;
    int A[] = {8,5,3,4,9,6};
    n = sizeof(A)/sizeof(A[0]);
    printf("Array before sorting\n");
    print_array(A,n);
    selection_sort(A,n);
    printf("\nArray after sorting\n");
    print_array(A,n);
}