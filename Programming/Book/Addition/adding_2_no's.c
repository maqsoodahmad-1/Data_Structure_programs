/*Consider the problem of adding two n-bit binary integers, stored in two n-element
arrays A and B. The sum of the two integers should be stored in binary form in
an (n + 1)-element array C . State the problem formally and write pseudocode for
adding the two integers.*/
//written by maqsood ahmad tali on 29-03-2022
 
#include<stdio.h>
int main()
{
 int A[] = {10,12,15,6};
 int B[] = {14,16,13,10};
 int C[16],n,k;
 n = A[0] + B[3];
 for(int i = 0 ;n>0;i++)
 {
     C[i] = n%2;
     n/=2;
 }

 k = sizeof(C)/sizeof(0);
 printf("The Result in binary is \t");
 for(int i=0;i<k;i++)
 {
    printf("%d",C[i]);
 }
 return 0;

}