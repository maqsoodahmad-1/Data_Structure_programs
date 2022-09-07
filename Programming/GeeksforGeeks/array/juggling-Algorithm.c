//Method 3 for rotation of an array
//n - used to represent the size of an array
//d - used to represent the number of elements array is to be rotated 
#include<stdio.h>
int printArray(int arr[], int n);
int gcd(int a, int b);
int leftRotate(int arr[], int n, int d );

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int d;
    int size = sizeof(arr) / sizeof(int);
    printf("size of array is %d\n",size);
    printf("Enter the number of elements you want o rotate an element ");
    scanf("%d",&d);
    printf("Array before rotation ");
    printArray(arr,size);
    leftRotate(arr,size,d);
    printf("Array after rotation ");
    printArray(arr,size);
    return 0;
}

//function that prints an array
int printArray(int arr[], int n) {
    for(int i = 0; i < n ;i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}

//Finding the Greatest common Divisor (GCD)
int gcd(int a , int b) {
    if(b == 0 ){
        return a;
    } else {
        return gcd(b, a % b);
    }
}

//function for rotating the array 
int leftRotate(int arr[], int n, int d ) {
    int temp, j, k;
    //to handle if d >= n 
    d =  d % n; 
    int GCD = gcd(d, n);

    //loop
    for(int i = 0; i < GCD; i++) {
        //move ith values of array
        temp = arr[i];//stroing the first value in a temporary variable
        j = i;
        while (1) {
            k =  j + d;//incrementing k
            if(k >= n) { //check if k exceeds the array size
                 k = k - n;
            }
            if(k == i) { //if k == i value of arr[i] alredy stored in temp so breaking the loop here
                break;
            }
            arr[j] = arr[k];//
            j = k ;
        }
        arr[j] = temp;  
        
    }
    return 0;
//The time complexity of this program is O(n0)
//The space complexity of this program is O(1)
}