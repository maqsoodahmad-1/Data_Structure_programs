//Another method of rotating the arrays in clock-wise direction using pointers

#include<stdio.h>
int printArray(int arr[],int n);
int swap(int *a, int *b);
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
//logic for rotating an array
int rotateArray(int arr[], int d, int n) {
for(int k = 0; k < d; k++) {
    int i = 0, j = n - 1 ;
    while(i != j){
        swap(&arr[i], &arr[j]);
        i++;
    }
}   
    return 0;
}
//function for swaping the two values
int swap(int *a, int *b){
printf("%ls",a);
int temp = *a;
*a = *b;
*b = temp;
}
