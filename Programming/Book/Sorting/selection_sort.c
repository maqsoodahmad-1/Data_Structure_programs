/*Consider sorting n numbers stored in array A by ﬁrst ﬁnding the smallest element
of A and exchanging it with the element in A[1]. Then ﬁnd the second smallest
element of A, and exchange it with A[2]. Continue in this manner for the ﬁrst n - 1
elements of A. Write pseudocode for this algorithm, which is known as selection
sort. What loop invariant does this algorithm maintain? Why does it need to run
for only the ﬁrst n - 1 elements, rather than for all n elements? Give the best-case
and worst-case running times of selection sort in ‚-notation.*/
//written by maqsood ahmad tali on 01-04-2022

#include<stdio.h>
void main()
{
int min ,j,n,loc ,temp;
int A[] = {8,5,3,4,9,3,6};
n = sizeof(A)/sizeof(A[0]);

for(int i = 0 ; i< n - 1 ;i++ )
{
    min = A[i];
    loc = i;
    j = i+1;
    for (j = i + 1; j < n ; j++) 
    {
        if (min > A[j])
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

for(int i = 0 ; i < n ; i++)
{
    printf("%d\t",A[i]);
}

printf("\n");
}