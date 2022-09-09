//Autheor:Maqsood Ahmad Tali
/*
*Rotating an array in using the reversal algorithm consists of following main steps 
*1:Reverse the first d (where d is the number of elements array is to be rotated)
*2:Reverse the remaining elements 
*3:Reverse tho whole array
* [1,2,3,4,5,6,7] original array
* [2,1,3,4,5,6,7] array after the first step
* [2,1,7,6,5,4,3] array after the second step
* [3,4,5,6,7,1,2] array after the last step (final array)
*/
#include<stdio.h>
int printArray(int arr[], int n);
int rotateArray(int arr[], int d, int n);
int reverseArray(int arr[], int start, int end);
void main(){
    int d;
    int arr[] ={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    printf("Enter the number of positions you want to rotate the Array: ");
    scanf("%d",&d);
    printf("Array Before Rotation\n");
    printArray(arr,size);
    rotateArray(arr,d,size);
    printf("Array after Rotation\n");
    printArray(arr,size);
}
//utility function for printing an array 
int printArray(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}

//logic for rotating an array
int rotateArray(int arr[], int d, int n) {
    //if no more elements are to be rotated then we return
    if(d == 0){
        return 0;
    }
    //if the rotating factor is greater than the number of elements
    d = d % n;
    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
    reverseArray(arr, 0, n-1);
    return 0;
}

//function for reversing the array
int reverseArray(int arr[], int start, int end) {
if(start == end ){
    return 0;
} else{ 
    while (start < end)
    {
     int temp = arr[end];
     arr[end] = arr[start] ;
     arr[start] = temp ;
     start ++;
     end --; 
    }
}
return 0;
}
//Time complexity O(n);
//Auxiliary Space O(1);