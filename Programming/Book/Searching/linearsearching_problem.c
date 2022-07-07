/*Input: A sequence of n numbers A = {a1,a2,.......,an}and a value .
Output: An index i such that v = A[i] or the special value NIL if v does not
appear in A.
Write pseudocode for linear search, which scans through the sequence, looking
for v. Using a loop invariant, prove that your algorithm is correct. Make sure that
your loop invariant fulﬁlls the three necessary properties.*/

//written by maqsood ahmad on 29-03-2022
#include<stdio.h>
int flag = 0 ,loc;
int linear_search(int arr[] , int n ,int v)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == v)
        {
            flag = 1 ;
            loc = i+1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Element is present at location %d \n",loc);
    }
    else
    {
        printf("Element is not found in an array \n");
    }
}

int print_array(int arr[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{   
    int n;
    printf("Enter the number of elements in an array :");
    scanf("%d",&n);
    int arr[n],v;
    printf("Enter the %d Elements in an array ",n);
    
    for(int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search for :");
    scanf("%d",&v);

    linear_search(arr,n,v);
    print_array(arr,n);
}