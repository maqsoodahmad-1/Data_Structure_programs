#include<stdio.h>
#include<math.h>
//initializing an array 
int Arr = [13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7];
int left_low, left_high, right_low, right_high, cross_low, cross_high;

//utility function for finding the maximum of the two numbers 
int max(int a, int b) {
    return (a>b)?a:b;
}

//utility function for finding the maximum of the three numbers
int max(int a, int b, int c) {
    return max(max(a,b),c);
}
//finding the maximum subarray crossing  the mid point 
int Max_Sub_Array_Crossing_Mid_Point(int Arr[], int low, int mid, int high ) {

int left_sum = -1000;
int sum = 0; 
int max_left;
for(int i = mid; i >= low; i++) {
    sum = sum + Arr[i];
    if(sum > left_sum) {
        left_sum = sum ;
        max_left = i;
    }
}
int right_sum = -1000;
sum = 0 ;
int max_right ;
for (int j = mid + 1; j <= high; j++) {
    sum = sum + Arr[j];
    if(sum > right_sum) {
        right_sum = sum;
        max_right = j;
    }
}
return (max_left, max_right, left_sum + right_sum);
}

//Finding the maximum subarray 
int Find_Maximum_Subarray(int Arr[], int low, int high) {
    int mid, max_sum;
    if(high == low) {
        return A[low]; //Base case only one element
    }
    else {
        mid = (floor(low + high )/ 2 );
        return max(
         Find_Maximum_Subarray(Arr, low, mid),
         Find_Maximum_Subarray(Arr, mid+1, high),
         Max_Sub_Array_Crossing_Mid_Point(Arr, low, mid, high));
    }
}

int main() {
    printf("Solution for finding the maximum subarray");
    size =  sizeof(Arr)/sizeof(int);
    max_sum = Find_Maximum_Subarray(Arr, 0, size - 1);
    printf("The sum of maximum contiguous subarray is %d \n",max_sum);
    return 0;    
}