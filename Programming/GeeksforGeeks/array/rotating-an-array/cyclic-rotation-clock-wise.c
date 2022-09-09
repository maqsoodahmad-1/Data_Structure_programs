/*
* Rotating an array clockwise
* Following are steps. 
1) Store last element in a variable say x. 
2) Shift all elements one position ahead. 
3) Replace first element of array with x.
*/
#include<stdio.h>
int printArray(int arr[],int n);
int rotateArray(int arr[], int d, int n);
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
//function for rotating an array
int rotateArray(int arr[], int d, int n) {
for(int j = 0; j < d; j++) {
  int x = arr[n -1];
  for(int i = n -1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = x;
}
return 0;
}

